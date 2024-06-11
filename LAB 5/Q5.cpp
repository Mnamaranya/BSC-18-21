#include<iostream>

using namespace std;

void menu();

double areaOfASquare(double length);
double areaOfARectangle(double length, double width);
double areaOfATriangle(double base, double height);

int main(){
    
    while(true){
        int input;
        menu();

        cin>>input;
        while (!(input >= 1 && input <= 4)){
            printf("Your input was: %d which is an invalid input \nPlease enter a valid input!!!\n", input);
            menu();
            cin>>input;
        }

        if(input == 1){
            double length;
            cout<<"Enter length: ";
            cin >> length;
            cout<<"Area is "<<areaOfASquare(length);
        }

        if(input == 2){
            double length;
            double width;
            cout<<"Enter length: ";
            cin>>length;
            cout<<"Enter width: ";
            cin>>width;
            cout<<"Area is "<<areaOfARectangle(length, width);
        }

        if(input ==3){
            double base;
            double height;
            cout<<"Enter base: ";
            cin>>base;
            cout<<"Enter height: ";
            cin>>height;
            cout<<"Area is "<<areaOfATriangle(base, height);
        }

        if(input==4) break; 
    }

    return 0;
}

void menu(){
    cout<<"Please select the shape of the area to calculate \n";
    cout<<"1. Square \n";
    cout<<"2. Rectangle \n";
    cout<<"3. Triangle \n";
    cout<<"4. Quit Program \n";
    cout<<"Enter Selection: ";
}

double areaOfASquare(double length) {
    return areaRectangle(length, length);
}
double areaOfARectangle(double length, double width) {
    return length * width;
}

double  areaOfATriangle(double base, double height){
    return 0.5 * base * height;
}