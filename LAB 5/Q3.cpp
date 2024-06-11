#include <iostream>
#include <string>

using namespace std;

int main(){
    //creation and decrelaration of an array
    string myArray[8] = {"B123", "C234", "A345", "C15", "B177", "G3003", "C235", "B179"};

    //array element starting with the character 'B'
    int myArrayLength = sizeof(myArray) / sizeof(myArray[0]);
    for (int i = 0; i < myArrayLength; i++) {
        const string myelement = myArray[i];
        const char firstChar = myelement[0];
        
        //the output is compared to 'B'
        if(firstChar == 'B'){
            cout << myelement <<endl;
        }

     }
     return 0;

    

}