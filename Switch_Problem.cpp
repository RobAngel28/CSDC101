#include <iostream>
using namespace std;

int main ()
{
    int choice;

    cout << "What problem do you want to see? ";
    cin >> choice;

    switch (choice) {
        case 1: {
            cout << "Problem 1: Basic Pricing Decision" << endl;
        
            double money;
    
            cout << "Enter your money: ";
            cin >> money;

            if (money >= 1) {
                cout << "Enjoy your lemonade!" << endl;
            } else if (money < 1) {
                cout << "Sorry, you need more money";
            }
        }
        break;


        case 2: {
            cout << "Problem 2: Weather Based Discounts" << endl;

            float temperature;
            int answer;

            cout << "Enter today's temperature in Celsius: ";
            cin >> answer;

            if (answer >= 30) {
                cout << "It's hot! Lemonade costs $0.80 today.";
            } else if (answer < 30) {
                cout << "It's not that hot today, lemonade costs $1.00 today.";
            }
        }
        break;


        case 3: {
            cout << "Problem 3: Inventory Check" << endl;

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
        }
        break;


        case 4: {
            cout << "Problem 4: Bulk Purchase Discount" << endl;

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
        }
        break;


        case 5: {
            cout << "Problem 5: Player Movement" << endl;

            int x = 0, y = 0;
            char move;

            cout << "Enter move (W/A/S/D): ";
            cin >> move;

            if (move == 'W' || move == 'w') {
                y += 1; 
            } else if (move == 'S' || move == 's') {
                y -= 1; 
            } else if (move == 'A' || move == 'a') {
                x -= 1; 
            } else if (move == 'D' || move == 'd') {
                x += 1; 
            } else {
                cout << "Invalid move!" << endl;
            }

            cout << "The location of the player is (" << x << ", " << y << ")" << endl;
        break;
        }    


        default:
            cout << "Invalid choice! Please select 1-5." << endl;
    
}

return 0;

}
