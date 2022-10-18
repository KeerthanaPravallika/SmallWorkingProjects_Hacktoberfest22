#include <iomanip>
#include <iostream>

using namespace std;


int main() {
    const double PIZZA = 15.50,
                 SODA = 2.00,
                 CHICKEN_NUGGETS = 7.00,
                 BREADSTICKS = 9.75;

    double numItems = 0,
           menuItem,
           total = 0;

    char itemLetter;

    cout << "=====================================================" << endl;
    cout << "\t"
         << "Welcome to Pizza Palace" << endl;
    cout << "=====================================================" << endl;

    cout << fixed << setprecision(2) << right;

    do {
        cout << "-----------------------------------------------------" << endl
             << endl;
        cout << "\t"
             << "A"
             << "\t"
             << "Pizza" << setw(26) << PIZZA << endl;
        cout << "\t"
             << "B"
             << "\t"
             << "Soda" << setw(27) << SODA << endl;
        cout << "\t"
             << "C"
             << "\t"
             << "Chicken Nuggets" << setw(16) << CHICKEN_NUGGETS << endl;
        cout << "\t"
             << "D"
             << "\t"
             << "Breadsticks" << setw(20) << BREADSTICKS << endl;
        cout << "\t"
             << "E"
             << "\t"
             << "Exit" << endl
             << endl;

        cout << "Please enter the next menu item Letter: ";
        cin >> itemLetter;

        cout << endl;

        switch (itemLetter) {
            case 'A':
                menuItem = PIZZA;
                break;
            case 'B':
                menuItem = SODA;
                break;
            case 'C':
                menuItem = CHICKEN_NUGGETS;
                break;
            case 'D':
                menuItem = BREADSTICKS;
                break;
            case 'E':
                cout << "Thank you! Enjoy!" << endl
                     << endl;
                break;
            default:
                cout << "Please pick a valid option" << endl
                     << endl;
        }

        if (itemLetter == 'A' || itemLetter == 'B' || itemLetter == 'C' || itemLetter == 'D') {
            numItems++;
        }

        cout << "Number of items so far: " << setprecision(0) << numItems << endl;

        if (itemLetter == 'A' || itemLetter == 'B' || itemLetter == 'C' || itemLetter == 'D') {
            total += menuItem;
        }

        cout << "Your total so far: " << setprecision(2) << total << endl
             << endl;

    }

    while (itemLetter != 'E');
    {
        cout << "Your total is " << total << endl;
    }

    return 0;
}
