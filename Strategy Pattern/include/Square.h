#pragma once

#include <memory>
#include "Shape.h"

class DrawSquareStrategy;

class Square : public Shape {
public:
	Square(double length, std::unique_ptr<DrawSquareStrategy> drawer) : m_Length{ length }, m_Drawer{ std::move(drawer) } {}

	double getLength() const {
		return m_Length;
	}

	void draw() override;
private:
	double m_Length;
	std::unique_ptr<DrawSquareStrategy> m_Drawer;
};