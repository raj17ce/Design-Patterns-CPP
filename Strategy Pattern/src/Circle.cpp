#include "../include/Circle.h"
#include "../include/DrawCircleStrategy.h"

void Circle::draw() {
	m_Drawer->draw(*this);
}