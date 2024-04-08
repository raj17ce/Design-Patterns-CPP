#pragma once
#include "./DrawSquareStrategy.h"

class OpenGLDrawSquareStrategy : public DrawSquareStrategy {
public:
	void draw(Square& obj) override;
};