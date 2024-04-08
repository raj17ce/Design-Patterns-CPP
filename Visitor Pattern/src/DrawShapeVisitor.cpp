#include <iostream>
#include "../include/DrawShapeVisitor.h"

void DrawShapeVisitor::visit(Circle& obj) {
	std::cout << "Drawing Circle\n";
}

void DrawShapeVisitor::visit(Square& obj) {
	std::cout << "Drawing Square\n";
}