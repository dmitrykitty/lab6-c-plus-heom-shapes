#ifndef CIRCLE_H
#define CIRCLE_H

#include "shape.h"


namespace Shapes {
    class Circle: public Shape {
        Point center{0, 0};
        int radius_{0};

    public:
        Circle() = default;
        Circle(int xCenter, int yCenter, int radius): center(xCenter, yCenter), radius_(radius) {}

        int x() const { return center.x_; }
        int y() const { return center.y_; }
        int radius() const { return radius_; }

        bool isIn(int x, int y) const override;
    };


#endif //CIRCLE_H
}
