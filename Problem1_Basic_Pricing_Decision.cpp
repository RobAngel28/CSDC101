#include <iostream>
using namespace std;

int main() 
{
    double money;
    
    cout << "Enter your money: ";
    cin >> money;

    if (money >= 1) {
        cout << "Enjoy your lemonade!" << endl;
    } else if (money < 1) {
        cout << "Sorry, you need more money";
    }
    
    return 0;
}
