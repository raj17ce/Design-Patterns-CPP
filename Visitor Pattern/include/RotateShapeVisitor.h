#pragma once

#include "./ShapeVisitor.h"

class RotateShapeVisitor : public ShapeVisitor {
public:
	virtual ~RotateShapeVisitor() = default;
	void visit(Circle& obj) override;
	void visit(Square& obj) override;
};