#include<iostream>

using namespace std;

bool checkNumber(string str);

int main(){
    while(true){
        string in;
        int input;
        cout<<"enter number between 5 and 10 : ";
        cin>>in;

        if(!checkNumber(in)){
            cout<<"sorry you entered an invalid number. please try again \n";
            continue;
        }

        input =stoi(in);

        if(input<5 || input>10){
            cout<<"you entered "<<input<<" .number must be between 5 and 10 \n";
            continue;
        }
        cout<<"your input value ("<<input<<") has been accepted \n";
        break;
    }

    return 0;
}

bool checkNumber(string str){
    for(char a:str){
        if(isdigit(a)==0){
            return false;
        }
    }
    return true;
}