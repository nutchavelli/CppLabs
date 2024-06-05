#include <iostream>
#include <string>

using namespace std;

int main() 
{
    
    int* newInt= new int;
    string* newString = new string;

    cout << "Assign a value to the  allocated integer: ";
    cin >> *newInt;

    cout << "Assign a value to the  allocated string: ";
    cin.ignore();
    getline(cin, *newString);

    cout << "The value of dynamically allocated integer is: " << *newInt << endl;
    cout << "The value of dynamically allocated string is: " << *newString << endl;

    delete newInt;
    newInt=nullptr;
    delete newString;
    newString =nullptr;
    return 0;
}
