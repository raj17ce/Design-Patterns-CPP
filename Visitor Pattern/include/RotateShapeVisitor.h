#pragma once

#include "./ShapeVisitor.h"

class RotateShapeVisitor : public ShapeVisitor {
public:
	void visit(Circle& obj) override;
	void visit(Square& obj) override;
};