/* Osama Salem
  COSC-1436-57001
  Replit.com
  This prgram will convert the number of pennies provided
  into dollars, quarters, dimes, nickels and pennies
*/

#include <iostream>
using namespace std;

int main() {

  //declare variables
  int input, rem, dollars, quarters, dimes, nickels, pennies;
  
  //Requst input
  cout << "Enter the amount of pennies for conversion" << endl;
  cin >> input;

  //Execute modular division
  
  //Calculate for Dollars
  dollars = input / 100; //integer division
  rem = input % 100; //modular division
  cout << "The Dollar amount is = " << dollars << endl;
  
  //Calculate for quarters
  quarters = rem / 25; //integer division
  rem = rem % 25; //modular division
  cout << "The Quarter amount is = " << quarters << endl; //Display Output

  //Calculate for dimes
  dimes = rem / 10; //integer division
  rem = rem % 10; //modular division
  cout << "The Dime amount is = " << dimes << endl; //Display Output

  //Calculate for nickels
  nickels = rem / 5; //integer division
  rem = rem % 5; //modular division
  cout << "The Nickels amount is = " << nickels << endl; //Display Output

  //Calculate for pennies
  pennies = rem / 1; //integer division
  rem = rem % 1; //modular division
  cout << "The Penny amount is = " << pennies << endl; //Display Output

  return 0;
}