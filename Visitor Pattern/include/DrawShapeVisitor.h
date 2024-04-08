#pragma once

#include "./ShapeVisitor.h"

class DrawShapeVisitor : public ShapeVisitor {
public:
	void visit(Circle& obj) override;
	void visit(Square& obj) override;
};