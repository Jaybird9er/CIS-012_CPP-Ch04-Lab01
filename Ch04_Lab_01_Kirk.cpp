#include <iostream>
using namespace std;

int main ()
{
    // variables
    int integer = 0;

    // inputs
    cout << "Enter an integer number: ";
    cin >> integer;

    // outputs
    if (integer > 0)
    {
        cout << "The number you entered is " << integer << ", and this a positive number." << endl;
    };
    if (integer < 0)
    {
        cout << "The number you entered is " << integer << ", and this a negative number." << endl;
    };
    if (integer == 0)
    {
        cout << "The number you entered is " << integer << ", and this is zero." << endl;
    };

    return 0;
}
