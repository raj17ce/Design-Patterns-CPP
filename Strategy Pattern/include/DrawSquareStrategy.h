#pragma once

class Square;

class DrawSquareStrategy {
public:
	virtual ~DrawSquareStrategy() = default;

	virtual void draw(Square& obj) = 0;
};
