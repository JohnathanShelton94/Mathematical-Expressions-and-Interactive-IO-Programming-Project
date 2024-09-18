// This Program will ask the user how many cookies he or she wants to make, then display the number of cups of each ingredient needed for the specified number of cookies.


#include <iostream>
using namespace std;

int main() {
               // Ingredient amounts for 48 cookies
    double sugarPer48Cookies = 1.5;
    double butterPer48Cookies = 1.0;
    double flourPer48Cookies = 2.75;
    int cookiesProduced = 48;

               // Ask the user how many cookies they want to make
    int desiredCookies;
    cout << "Enter the number of cookies you want to make: ";
    cin >> desiredCookies;

               // Calculate the required ingredients
    double sugarNeeded = (sugarPer48Cookies / cookiesProduced) * desiredCookies;
    double butterNeeded = (butterPer48Cookies / cookiesProduced) * desiredCookies;
    double flourNeeded = (flourPer48Cookies / cookiesProduced) * desiredCookies;

              // Display the required ingredients
    cout << "To make " << desiredCookies << " cookies, you will need:" << endl;
    cout << sugarNeeded << " cups of sugar" << endl;
    cout << butterNeeded << " cups of butter" << endl;
    cout << flourNeeded << " cups of flour" << endl;

    return 0;
}
