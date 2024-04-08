#pragma once

#include <memory>
#include "Shape.h"

class DrawCircleStrategy;

class Circle : public Shape {
public:
	Circle(double radius, std::unique_ptr<DrawCircleStrategy> drawer) : m_Radius{ radius }, m_Drawer{std::move(drawer)} {}

	double getRadius() const {
		return m_Radius;
	}

	void draw() override;
private:
	double m_Radius;
	std::unique_ptr<DrawCircleStrategy> m_Drawer;
};