#pragma once
#include "Command.h"

class AddCommand : public Command {
public:
	AddCommand(int val) : value(val) {}

	int execute(int i) {
		return i + value;
	}
	int undo(int i) {
		return i - value;
	}
private:
	int value;
};