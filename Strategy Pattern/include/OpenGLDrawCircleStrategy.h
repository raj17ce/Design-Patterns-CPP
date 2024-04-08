#pragma once
#include "./DrawCircleStrategy.h"

class OpenGLDrawCircleStrategy : public DrawCircleStrategy {
public:
	void draw(Circle& obj) override;
};