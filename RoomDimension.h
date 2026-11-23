#ifndef ROOMDIMENSION_H
#define ROOMDIMENSION_H

#include "FeetInches.h"

class RoomDimension
{
private:
    FeetInches length;
    FeetInches width;

public:
    //constructor
    RoomDimension(const FeetInches& l, const FeetInches& w);

    // Calculate room area
    double getArea() const;
};

#endif