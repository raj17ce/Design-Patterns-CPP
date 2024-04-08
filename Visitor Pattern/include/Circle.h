#pragma once

#include "./Shape.h"

class Circle : public Shape {
public:
	virtual ~Circle() = default;
	void visit(std::unique_ptr<ShapeVisitor> ptr) override;
};