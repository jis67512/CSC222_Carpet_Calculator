#include "FeetInches.h"

int main()
{
    std::cout << "TEST 1: Copy Constructor\n";

    FeetInches original(5, 8);
    FeetInches copy(original);

    std::cout << "Original: " << original << '\n';
    std::cout << "Copy: " << copy << '\n';

    copy.setFeet(10);

    std::cout << "\n After modifying the copy:\n";
    std::cout << "Original: " << original << '\n';
    std::cout << "Copy: " << copy << '\n';

    std::cout << "\nTEST 2: Multiplication Operator\n";

    FeetInches length(5, 6);
    FeetInches width(4, 3);

    double area = length * width;

    std::cout << "Length: " << length << '\n';
    std::cout << "Width: " << width << '\n';
    std::cout << "Area: " << area << " square feet\n";

    std::cout << "\nTEST 3: Whole-Foot Multiplication\n";

    FeetInches length2(6, 0);
    FeetInches width2(4, 0);

    double area2 = length2 * width2;

    std::cout << "Area: " << area2 << " square feet\n";

    return 0;
}