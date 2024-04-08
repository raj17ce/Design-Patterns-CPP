#include "./include/Calculator.h"
#include "./include/AddCommand.h"
#include "./include/MultiplyCommand.h"

#include <iostream>

int main() {
	Calculator obj;

	std::cout << obj.getCurrent() << '\n';

	obj.executeCommand(std::make_unique<AddCommand>(10));
	std::cout << obj.getCurrent() << '\n';

	obj.executeCommand(std::make_unique<MultiplyCommand>(2));
	std::cout << obj.getCurrent() << '\n';

	obj.undoCommand(std::make_unique<MultiplyCommand>(2));
	std::cout << obj.getCurrent() << '\n';
}