#include "./include/Circle.h"
#include "./include/Square.h"
#include "./include/MyGLDrawCircleStrategy.h"
#include "./include/OpenGLDrawCircleStrategy.h"
#include "./include/OpenGLDrawSquareStrategy.h"

int main() {
	Circle obj1(17.4, std::move(std::make_unique<MyGLDrawCircleStrategy>()));
	obj1.draw();

	Square obj2(10.2, std::move(std::make_unique<OpenGLDrawSquareStrategy>()));
	obj2.draw();

	Circle obj3(17.4, std::move(std::make_unique<OpenGLDrawCircleStrategy>()));
	obj3.draw();
}