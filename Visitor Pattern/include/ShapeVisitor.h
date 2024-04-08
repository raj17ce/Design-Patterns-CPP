#pragma once

class Circle;
class Square;

class ShapeVisitor {
public:
	virtual ~ShapeVisitor() = default;
	virtual void visit(Circle& obj) = 0;
	virtual void visit(Square& obj) = 0;
};