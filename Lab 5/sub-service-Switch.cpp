

#include<iostream>
#include<cstdlib>
#include <time.h>

using namespace std;



int main(){
    
    srand(time(0));
    int daysUntilexpiration=(rand()%11);


    switch (daysUntilexpiration){
    case 0:
        cout<<"your subscription has expired \n ";
        break;
    case 1:
        cout<<"your subscription  expires in a day \nrenew now and save 20% \n ";
        break;
    case 2 ... 5:
        cout<<"your subscription expires in "<<daysUntilexpiration<<" days \nrenew now and save 10% \n";
        break;
    case 6 ... 10:
        cout<<"your subscription will expire soon. Renew now! \n ";
        break;
    case 11:
        cout<<"you have an active subscription \n ";
        break;
    default:
        break;
    }
    
    return 0;
}