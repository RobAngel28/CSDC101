#include <iostream>
using namespace std;

int main() {
    int cups;
    double price_per_cup = 1.0, total_cost, discount = 0.0;
    
    cout << "How many cups? ";
    cin >> cups;

    if (cups >= 1 && cups <= 4) {
        discount = 0.0; 
    } else if (cups >= 5 && cups <= 9) {
        discount = 0.10; 
    } else if (cups >= 10) {
        discount = 0.20;
    }

    total_cost = cups * price_per_cup * (1 - discount);

    cout << "Total cost: $" << total_cost << endl;

    return 0;
}
