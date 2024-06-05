#include<iostream>
#include<string>


using namespace std;

int main(){
    string words[]={"B123","C234","A345","C15","B177","G3003","C235","B179"};
    
    //using for each loop
    for(string word:words){
        if(!word.rfind("B",0)){
            cout<<word<<endl;
        }
    }

    return 0;
}