#include <iostream>
using namespace std;

int main()
{   
    //using postfix
    int x = 3;

    int y = x++;

    cout << "x: " << x << endl;
    cout << "y: " << y << endl;

    //using prefix increament
    int  z = 3;

    int v = ++x;

    cout <<"z: " << z << endl;
    
    cout <<"v: " << v << endl;

    return 0;
}