#include <iostream>
using namespace std;

int main(){
    srand(time(NULL));

    //generate random # from 0 - 11
    int daysUntilExpiration = rand() % 12;

    if(daysUntilExpiration > 10){
        cout << "You have an active subscription." << endl;
    }
    else if (daysUntilExpiration == 0)
    {
         cout << "Your Subscription has expired" << endl;
    }
    else if (daysUntilExpiration <= 1)
    {
         cout << "Your subscription expires within a day!." << endl;
         cout << "Renew now and save 20%!" << endl;

    }
    else if (daysUntilExpiration <= 5) {
         cout << "Your subscription expires in" << daysUntilExpiration << "days" << endl;
         cout <<"Renew now and save 10%!" << endl;
    }

    else{
        cout << "Your Subscription will expire soon. Renew now!" << endl;
    }
    

    return 0;
    
    
    
}