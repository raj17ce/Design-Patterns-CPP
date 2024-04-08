#include "../include/Square.h"
#include "../include/DrawSquareStrategy.h"

void Square::draw() {
	m_Drawer->draw(*this);
}