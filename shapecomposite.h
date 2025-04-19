#ifndef SHAPECOMPOSITE_H_EXISTS
#define SHAPECOMPOSITE_H_EXISTS


#include "shape.h"
#include <memory>


namespace Shapes {
    enum class ShapeOperation {
        INTERSECTION,
        SUM,
        DIFFERENCE
    };

    class ShapeComposite : public Shape {
        std::shared_ptr<Shape> shape1;
        std::shared_ptr<Shape> shape2;
        ShapeOperation operation;

    public:
        ShapeComposite(const std::shared_ptr<Shape> &s1,
                       const std::shared_ptr<Shape> &s2, ShapeOperation op): shape1(s1), shape2(s2), operation(op) {}

        bool isIn(int x, int y) const override;
    };

}

#endif //SHAPECOMPOSITE_H_EXISTS
