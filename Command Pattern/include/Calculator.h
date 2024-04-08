#pragma once

class Command;
#include <memory>

class Calculator {
public:
	int executeCommand(std::unique_ptr<Command> command);
	int undoCommand(std::unique_ptr<Command> command);

	int getCurrent() {
		return current;
	}
private:
	int current{ 0 };
};