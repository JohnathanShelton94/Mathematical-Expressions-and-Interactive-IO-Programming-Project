// This program will ask for the principal, the interest rate, and the number of times the interest is compounded; Displayed in the given format


#include <iostream>
#include <iomanip>               // for output formatting
using namespace std;

int main() {
                   // Declare variables
    double principal, rate, interest, amount;
    int timesCompounded;

                   // Ask the user for input
    cout << "Enter the principal amount: $";
    cin >> principal;

    cout << "Enter the annual interest rate (as a percentage, e.g., 4.25 for 4.25%): ";
    cin >> rate;

    cout << "Enter the number of times the interest is compounded per year: ";
    cin >> timesCompounded;

                    // Convert the interest rate from a percentage to a decimal
    rate = rate / 100;

                   // Calculate the amount in savings using the compound interest formula
    amount = principal * pow((1 + rate / timesCompounded), timesCompounded);

                    // Calculate the interest earned
    interest = amount - principal;

                   // Display the report
    cout << fixed << setprecision(2);                 // Format output to 2 decimal places
    cout << "Interest Rate:      " << setw(7) << (rate * 100) << "%" << endl;
    cout << "Times Compounded:    " << setw(7) << timesCompounded << endl;
    cout << "Principal:          $" << setw(7) << principal << endl;
    cout << "Interest:           $" << setw(7) << interest << endl;
    cout << "Amount in Savings:  $" << setw(7) << amount << endl;

    return 0;
}
