#include "shapecomposite.h"

bool Shapes::ShapeComposite::isIn(int x, int y) const {
    switch (operation) {
        case ShapeOperation::SUM:
            return shape1->isIn(x, y) || shape2->isIn(x, y);
        case ShapeOperation::DIFFERENCE:
            return (shape1->isIn(x, y) && !shape2->isIn(x, y)) || (!shape1->isIn(x, y) && shape2->isIn(x, y)) ;
        default:
            return shape1->isIn(x, y) && shape2->isIn(x, y);

    }
}
