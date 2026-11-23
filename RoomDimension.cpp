#include "RoomDimension.h"

RoomDimension::RoomDimension(const FeetInches& l, const FeetInches& w)
    : length(l), width(w) {}

double RoomDimension::getArea() const
{
    return length * width;
}