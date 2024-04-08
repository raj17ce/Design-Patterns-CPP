#pragma once

#include "./Shape.h"

class Square : public Shape {
public:
	virtual ~Square() = default;
	void visit(std::unique_ptr<ShapeVisitor> ptr) override;
};