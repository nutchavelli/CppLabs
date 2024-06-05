#include<iostream>

using namespace std;


void triangle(int base,int height);
void square(int length);
void rectangle(int width,int lenght);


int main(){
    while(true){
       int choice;
       cout<<"please select area of shape to caclulate \n";

       cout<<"1. Square \n";
       cout<<"2. Rectangle \n";
       cout<<"3. Triangle \n";
       cout<<"4. Exit \n";

       cout<<"enter selection: ";
       cin>>choice;

       switch(choice){
            case 1:
                cout<<"enter length: ";
                int length; 
                cin>>length;
                square(length);
                break;
            case 2:
                int len;
                int width;
                cout<<"enter length: ";
                cin>>len;
                cout<<"enter width: ";
                cin>>width;
                rectangle(width,len);
                break;
            case 3:
                int base;
                int height;
                cout<<"enter base: ";
                cin>>base;
                cout<<"enter height: ";
                cin>>height;
                triangle(base,height);
                break;
            case 4:
                return 0;
            default:
                cout<<"your input was "<<choice<<" which is invalid \n";
                cout<<"please enter a valid input!! \n";
                break;
       }
    }

    return 0;
}

void triangle(int base,int height){
    cout<<"area of the traingle is: "<<0.5*base*height<<" \n";
}

void square(int length){
   cout<<"area of the square is: "<<length*length<<" \n"; 
}

void rectangle(int width,int length){
    cout<<"area of the traingle is: "<<width*length<<" \n";
}