#include <iostream>
using namespace std;

int main(){
   
    srand(time(NULL));

     //generate random # from 0 - 11
    int daysUntilExpiration = rand() % 12;

    switch (daysUntilExpiration)
    {
    case 0:
        cout << "Your Subscription has expired" << endl;
        break;

    case 1:
         cout << "Your subscription expires within a day!." << endl;
         cout << "Renew now and save 20%!" << endl;

        break;
    case 2:
    case 3:
    case 4:
    case 5:
        cout << "Your subscription expires in" << daysUntilExpiration << "days" << endl;
        cout <<"Renew now and save 10%!" << endl;
        break;

    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
         cout <<"Your Subscription will expire soon. Renew now!"  << endl;
         break;

    
    
    default:
         cout << "You have an active subscription." << endl;
        break;
    }

    return 0;

}