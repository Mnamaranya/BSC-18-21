#include <iostream>
using namespace std;

// Function prototype for pass-by-reference version
void SwapNumbers(int &varA, int &varB);

// Function prototype for pass-by-pointer version
void SwapNumbers(int *varA, int *varB);

int main()
{
    int varA = 25;
    int varB = 100;

    cout << "varA before swap: " << varA << endl;
    cout << "varB before swap: " << varB << endl;

    // Calling the pass-by-reference version of SwapNumbers
    // SwapNumbers(&varA, &varB);

    // Calling the pass-by-pointer version of SwapNumbers
    SwapNumbers(&varA, &varB);

    cout << "varA after swap: " << varA << endl;
    cout << "varB after swap: " << varB << endl;

    return 0;
}

// Function definition for pass-by-reference version
void SwapNumbers(int &varA, int &varB)
{
    int temp;
    temp = varA; // Store the value of varA in temp
    varA = varB; // Assign the value of varB to varA
    varB = temp; // Assign the original value of varA (stored in temp) to varB
    return;
}

// Function definition for pass-by-pointer version
void SwapNumbers(int *varA, int *varB)
{
    int temp;
    temp = *varA;  // Store the value pointed to by varA in temp
    *varA = *varB; // Assign the value pointed to by varB to the address pointed to by varA
    *varB = temp;  // Assign the original value of varA (stored in temp) to the address pointed to by varB
    return;
}