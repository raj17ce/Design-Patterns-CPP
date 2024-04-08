#pragma once
#pragma once
#include "Command.h"

class MultiplyCommand : public Command {
public:
	MultiplyCommand(int val) : value(val) {}

	int execute(int i) {
		return i * value;
	}
	int undo(int i) {
		return i / value;
	}
private:
	int value;
};