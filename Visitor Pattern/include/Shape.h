#pragma once

#include <memory>

class ShapeVisitor;

class Shape {
public:
	virtual void visit(std::unique_ptr<ShapeVisitor> ptr) = 0;
};