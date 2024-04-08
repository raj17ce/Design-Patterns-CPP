#pragma once

class Circle;

class DrawCircleStrategy {
public:
	virtual ~DrawCircleStrategy() = default;

	virtual void draw(Circle& obj) = 0;
};