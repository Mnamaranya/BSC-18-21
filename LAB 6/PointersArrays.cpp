#include <iostream>
using namespace std;

int main()
{
    int numbersArrays[5];
    int *pPointer = nullptr;

    
    pPointer = numbersArrays;

    *pPointer = 10; 

    
    pPointer++;
    *pPointer = 20; 

    
    pPointer = &numbersArrays[2];
    *pPointer = 30; 

    
    pPointer = numbersArrays + 3;
    *pPointer = 40;


    pPointer = numbersArrays;

    return 0;
}