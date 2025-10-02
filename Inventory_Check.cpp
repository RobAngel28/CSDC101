#include <iostream>
using namespace std;

int main()
{
    int lemons, sugar;

    cout << "How many lemons you got there? ";
    cin >> lemons;
    cout << "How many cups of sugar you got there? ";
    cin >> sugar;

    if (lemons <= 0 || sugar <= 0) {
        cout << "You can't make lemonade!";
    } else {
        cout << "You're ready to sell lemonade!";
    }

    return 0;
}
