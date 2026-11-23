// FeetInches, Version 5 Example, operator overloading, relational operators, and type conversion.
#include <iostream>
#include "FeetInches.h"

using namespace std;

int main()
{
    FeetInches obj1(5, 8);
    FeetInches obj2(3, 4);
    FeetInches obj3, obj4;

    cout << "Demonstrating the overloaded + operator (and stream insertion operator, <<):\n";
    obj3 = obj1 + obj2;
    cout << obj1 << " + " << obj2 << " = " << obj3 << endl << endl;

	cout << "Demonstrating the overloaded - operator:\n";
	obj4 = obj1 - obj2;
	cout << obj1 << " - " << obj2 << " = " << obj4 << endl << endl;

	cout << "Demonstrating the overloaded relational operators:\n";
    // Compare the two objects.

    if (obj1 > obj2)
        cout << obj1 << " is greater than " << obj2 << endl;
    else
		cout << obj1 << " is not greater than " << obj2 << endl;

    if (obj1 < obj2)
        cout << obj1 << " is less than " << obj2 << endl;
    else
        cout << obj1 << " is not less than " << obj2 << endl;

    if (static_cast<double>(obj1) == static_cast<double>(obj2))
       cout << obj1 << " is equal to " << obj2 << endl;
    else
       cout << obj1 << " is not equal to " << obj2 << endl << endl;

    cout << "Demonstrating the extraction operator >> overload and type conversion\n";
        
    FeetInches distance;

    cout << "Enter a distance in feet and inches:\n";
    cin >> distance;

    double d = static_cast<double>(distance);
    int i = static_cast<int>(distance);

    cout << "The value " << distance;
    cout << " is equivalent to " << d << " feet\n";
    cout << "or " << i << " feet, rounded down.\n";

    return 0;
}
