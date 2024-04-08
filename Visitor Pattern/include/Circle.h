#pragma once

#include "./Shape.h"

class Circle : public Shape {
public:
	void visit(std::unique_ptr<ShapeVisitor> ptr) override;
};