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

    return 0;
}