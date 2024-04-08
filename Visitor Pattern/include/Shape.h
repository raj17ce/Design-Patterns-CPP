#pragma once

#include <memory>

class ShapeVisitor;

class Shape {
public:
	virtual ~Shape() = default;
	virtual void visit(std::unique_ptr<ShapeVisitor> ptr) = 0;
};