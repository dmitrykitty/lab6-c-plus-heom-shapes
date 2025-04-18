#pragma once
#include "shape.h"

#ifndef RECTANGLE_H
#define RECTANGLE_H

namespace Shapes {
    class Rectangle : public Shape {
        Point _bottomLeft{0, 0}, _topRight{0, 0};

    public:
        Rectangle() = default;
        Rectangle(int xFrom, int yFrom, int xTo, int yTo): _bottomLeft(xFrom, yFrom), _topRight(xTo, yTo) {}

        int x() const { return _bottomLeft.x_; }
        int y() const { return _bottomLeft.y_; }
        int xTo() const { return _topRight.x_; }
        int yTo() const { return _topRight.y_; }


        bool isIn(int x, int y) const override;
    };
}
#endif //RECTANGLE_H
