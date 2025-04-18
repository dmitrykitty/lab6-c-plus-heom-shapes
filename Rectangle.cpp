
#include "Rectangle.h"

bool Shapes::Rectangle::isIn(int x, int y) const {
    return x >= _bottomLeft.x_ && x <= _topRight.x_ && y >= _bottomLeft.y_ && y <= _topRight.y_;
}
