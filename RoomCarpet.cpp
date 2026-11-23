#include "RoomCarpet.h"
#include <stdexcept>

RoomCarpet::RoomCarpet(const RoomDimension * room, double price)
    : dimension(room), CostPerSquareFoot(price)
{
    if (room == nullptr) {
        throw std::invalid_argument("RoomDimension pointer cannot be null.");
    }
    if (price <= 0) 
    {
        throw std::invalid_argument("Cost per square foot must be positive.");
    }
}
double RoomCarpet::getTotalCost() const
{
    return dimension->getArea() * CostPerSquareFoot;
}
