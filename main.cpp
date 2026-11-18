
#include <iostream>
#include <iomanip> // fixed, setprecision
#include <cmath> // ceil(), round(), floor()

using namespace std;

const double NUM_SLICES = 8.0; // per pizza
const double GST_TAX = 0.05; // 5% in decimal

// ---------------- prototypes ------------------
int calcSlicesNeeded(int guests, int slicesPerGuest);


// TODO finish prototypes

// -----------------main function ----------------
int main() {
    int numGuests;
    string partyName;
    double total = 0.0;

    // Inputs

    cout << "Party Name: ";
    getline(cin, partyName); // to get the full party name with spaces

    cout << "Number of guests: ";
    cin >> numGuests;

    // TODO - ask for more inputs (cin or getline)


    return 0;
}

// ------------------- function definitions -----------------------------

// PURPOSE: calculates the slices of pizza needed
// INPUT:   guests - the number of guests
//          slicesPerGuest - the number of slice each guest is going to eat
// OUTPUT:  returns the total number of slices needed for the party.
int calcSlicesNeeded(int guests, int slicesPerGuest) {
    return guests * slicesPerGuest;
}