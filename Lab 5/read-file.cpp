#include<iostream>
#include<fstream>
#include<cctype>
#include<sstream>
#include<vector>


using namespace std;

int countVowels(string data);
void Reverse(string data);
int countWords(string data);
void Capitalize(string data);


int main(){

    ifstream inputStream;
    string fileData;

    inputStream.open("text_file.txt");

    if(inputStream.is_open()){
        getline(inputStream,fileData);
        
        cout<<"num of vowels: "<<countVowels(fileData)<<"\n";

        cout<<"num of words: "<<countWords(fileData)<<"\n";

        Reverse(fileData);

        Capitalize(fileData);
        
        inputStream.close();
    }else{
        cout<<"failed to open file \n";
    } 
    return 0;
}

void Reverse(string filedata){
    stringstream  ss(filedata);
    vector<string> words;
    string token;
    string finalStr="";
    string byLetter="";

    while(ss>>token){
        words.push_back(token);
    }

    for(int i=words.size()-1;i>-1;i--){
       finalStr=finalStr+words[i]+" ";
    }

    for(int i=filedata.length()-1;i>-1;i--){
        byLetter=byLetter+filedata[i];
    }
    cout<<"reverse word by word: \n";
    cout<<finalStr<<"\n";
    cout<<"reverse by letter: \n";
    cout<<byLetter<<"\n";
}

int countWords(string data){
    stringstream  ss(data);

    vector<string> words;

    string token;

    while(ss>>token){
        words.push_back(token);
    }
    return words.size();
}

int countVowels(string data){
    int numOfvowels=0;
    string vowels={'a','e','i','o','u'};
    for(char a:data){
        if(vowels.find(tolower(a)) != string::npos){
            numOfvowels++;
        }
    }
    return numOfvowels;
}

void Capitalize(string filedata){
    stringstream  ss(filedata);

    vector<string> words;

    string capitalizedStr="";

    string token;

    while(ss>>token){
        if(token.length()>1){
            token[1]=toupper(token[1]);
        }
        words.push_back(token);
    } 
    for(int i=0;i<words.size();i++){
        capitalizedStr=capitalizedStr+words[i]+" ";
    }
    cout<<capitalizedStr<<"\n";
}