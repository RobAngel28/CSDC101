#include <iostream>                                                             // input and output library
using namespace std;                                                            // standard namespace for cin and cout

int main()
{
   int num1, num2, product;                                                     // integer vaiables
   
   cout << "Enter Number: ";                                                    // output enter number
   cin >> num1;                                                                 // user input number
   cout << "Another number: ";                                                  //output another number
   cin >> num2;                                                                 //user input another number
   product = num1 * num2;                                                       //set the value of sum as num1 + num2
   cout << "The sum of the wro numbes is: " << product;                         //output sum of numbers
    
    return 0;
}
