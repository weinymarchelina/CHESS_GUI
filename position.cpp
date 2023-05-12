#include "position.h"

Position::Position()
{
    this->x = 0;
    this->y = 0;
}

Position::Position(int x, int y)
{
    this->x = x;
    this->y = y;
}

bool Position::operator==(const Position& pos)
{
    if(this->x == pos.x && this->y == pos.y)
    {
        return true;
    }

    else
    {
        return false;
    }
}
