#ifndef ROOMCARPET_H
#define ROOMCARPET_H

#include "RoomDimension.h"

class RoomCarpet
{
private:
    const RoomDimension * dimension;
    double CostPerSquareFoot;

public:
    // Constructor

    RoomCarpet(const RoomDimension * room, double price);
    double getTotalCost() const;
};

#endif