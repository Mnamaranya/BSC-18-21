#include <iostream>
#include <string>
using namespace std;

int main()
{
    int numberOfCharacters;

    
    int *number = new int(sizeof(int));

    cout << "Enter an integer: ";
    cin >> *number;

    cout << *number << endl;


    string *myString = nullptr;
    char temp[100]; 

    
    cout << "Enter the string: " << endl;
    cin >> temp;                     
    cin.getline(temp, sizeof(temp)); 

    
    myString = new string(temp);

    cout << "Your word is " << *myString << endl;
    
    delete number;
    delete myString;

    return 0;
}