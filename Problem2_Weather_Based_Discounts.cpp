#include <iostream>
using namespace std;

int main() {

    float temperature;
    int answer;

    cout << "Enter today's temperature in Celsius: ";
    cin >> answer;

    if (answer >= 30) {
        cout << "It's hot! Lemonade costs $0.80 today.";
    } else if (answer < 30) {
        cout << "It's not that hot today, lemonade costs $1.00 today.";
    }

    return 0;
}
