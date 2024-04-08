#include "./include/Shape.h"
#include "./include/Circle.h"
#include "./include/Square.h"
#include "./include/DrawShapeVisitor.h"
#include "./include/RotateShapeVisitor.h"

#include <memory>

int main() {
	Circle obj1;
	obj1.visit(std::make_unique<DrawShapeVisitor>());
	obj1.visit(std::make_unique<RotateShapeVisitor>());

	Square obj2;
	obj2.visit(std::make_unique<DrawShapeVisitor>());
	obj2.visit(std::make_unique<RotateShapeVisitor>());
}