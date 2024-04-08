#include <iostream>
#include "../include/RotateShapeVisitor.h"

void RotateShapeVisitor::visit(Circle& obj) {
	std::cout << "Rotating Circle\n";
}

void RotateShapeVisitor::visit(Square& obj) {
	std::cout << "Rotating Square\n";
}