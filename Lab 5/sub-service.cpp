

#include<iostream>
#include<cstdlib>
#include <time.h>

using namespace std;



int main(){
    
    srand(time(0));
    int daysUntilexpiration=(rand()%11);
     
    if(daysUntilexpiration < 1)
    {
        cout<<"your subscription has expired \n ";
    }else if(daysUntilexpiration == 1)
    {
        cout<<"your subscription  expires in a day \nrenew now and save 20% \n ";
    }else if(daysUntilexpiration >0 && daysUntilexpiration <= 5)
    {
        cout<<"your subscription expires in "<<daysUntilexpiration<<" days \nrenew now and save 10% \n";
    }else if (daysUntilexpiration <= 10)
    {
        cout<<"your subscription will expire soon. Renew now! \n ";
    }else{
        cout<<"you have an active subscription \n ";
    }
    
    return 0;
}