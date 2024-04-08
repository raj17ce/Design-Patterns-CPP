#pragma once
#include "./DrawCircleStrategy.h"

class MyGLDrawCircleStrategy : public DrawCircleStrategy {
public:
	void draw(Circle& obj) override;
};