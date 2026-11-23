#include "FeetInches.h"
#include "RoomDimension.h"
#include "RoomCarpet.h"

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

    std::cout << "\nTEST 4: RoomDimension Area and Composition\n";

    FeetInches roomLength(5, 6);
    FeetInches roomWidth(4, 3);

    RoomDimension room(roomLength, roomWidth);

    std::cout << "Initial room area: " << room.getArea() << " square feet\n";

    // Modify the original measurement
    roomLength.setFeet(10);

    std::cout << "Original length after modification: " << roomLength << '\n';

    std::cout << "Room area after modification: " << room.getArea() << " square feet\n";

    std::cout << "\nTEST 5: RoomCarpet Cost Calculation\n";

    RoomCarpet carpet(&room, 4.00);

    std::cout << "Room area: " << room.getArea() << " square feet\n";

    std::cout << "Carpet price: $4.00 per square foot\n";

    std::cout << "Total carpet cost: $" << carpet.getTotalCost() << '\n';

    std::cout << "\nTEST 6: Multiple Carpet Prices and Aggregation\n";

    RoomCarpet carpetA(&room, 4.00);
    RoomCarpet carpetB(&room, 6.00);

    std::cout << "Carpet A total: $" << carpetA.getTotalCost() << '\n';

    std::cout << "Carpet B total: $" << carpetB.getTotalCost() << '\n';

    return 0;
}