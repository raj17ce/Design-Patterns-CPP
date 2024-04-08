#pragma once

#include "./Shape.h"

class Square : public Shape {
public:
	void visit(std::unique_ptr<ShapeVisitor> ptr) override;
};