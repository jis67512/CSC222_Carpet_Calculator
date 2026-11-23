
#include <iostream>
#include <iomanip>
#include <cmath>
#include <exception>

#include "FeetInches.h"
#include "RoomDimension.h"
#include "RoomCarpet.h"

int main()
{
    // User input variables
    int lengthFeet;
    int lengthInches;
    int widthFeet;
    int widthInches;
    double costPerSquareFoot;

    std::cout << "=== Carpet Cost Calculator ===\n\n";

    // Get room measurements
    std::cout << "Enter the length of the room (feet inches): ";
    std::cin >> lengthFeet >> lengthInches;

    std::cout << "Enter the width of the room (feet inches): ";
    std::cin >> widthFeet >> widthInches;

    std::cout << "Enter the carpet cost per square foot: $";
    std::cin >> costPerSquareFoot;

    // Validate numeric input
    if (!std::cin)
    {
        std::cerr << "Error: Invalid numeric input.\n";
        return 1;
    }

    // Reject negative room measurements
    if (lengthFeet < 0 || lengthInches < 0 ||widthFeet < 0 || widthInches < 0)
    {
        std::cerr << "Error: Room measurements cannot be negative.\n";
        return 1;
    }

    // Reject zero-length or zero-width rooms
    if ((lengthFeet == 0 && lengthInches == 0) || (widthFeet == 0 && widthInches == 0))
    {
        std::cerr << "Error: Room dimensions must be positive.\n";
        return 1;
    }

    // Validate carpet price
    if (!std::isfinite(costPerSquareFoot) ||
        costPerSquareFoot <= 0)
    {
        std::cerr << "Error: Carpet price must be positive.\n";
        return 1;
    }

    try
    {
        // Construct FeetInches objects
        FeetInches length(lengthFeet, lengthInches);
        FeetInches width(widthFeet, widthInches);

        // Demonstrate the FeetInches copy constructor
        FeetInches copiedLength(length);

        // Demonstrate the overloaded multiplication operator
        double directArea = length * width;

        // Construct RoomDimension using composition
        RoomDimension room(length, width);

        // Construct RoomCarpet using aggregation
        RoomCarpet carpet(&room, costPerSquareFoot);

        // Display the carpet estimate
        std::cout << "\n=== Carpet Estimate ===\n";

        std::cout << "Room length: " << length << '\n';
        std::cout << "Room width: " << width << '\n';

        // Display the copy constructor result
        std::cout << "\nCopy Constructor Demonstration:\n";
        std::cout << "Original length: " << length << '\n';
        std::cout << "Copied length: " << copiedLength << '\n';

        // Format numeric output
        std::cout << std::fixed << std::setprecision(2);

        // Display multiplication operator result
        std::cout << "\nMultiplication Operator Demonstration:\n";
        std::cout << "Area from length * width: " << directArea << " square feet\n";

        // Display final calculations
        std::cout << "\nRoom area: " << room.getArea() << " square feet\n";

        std::cout << "Carpet price per square foot: $" << costPerSquareFoot << '\n';

        std::cout << "Total carpet cost: $" << carpet.getTotalCost() << '\n';
    }
    catch (const std::exception& error)
    {
        std::cerr << "Error: " << error.what() << '\n';
        return 1;
    }

    return 0;
}
