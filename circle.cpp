#include "circle.h"
#include <cmath>

bool Shapes::Circle::isIn(int x, int y) const{
    const double distance = sqrt((x - center.x_)*(x - center.x_) + (y - center.y_)*(y - center.y_));
    return static_cast<double>(radius_) >= distance;
}
