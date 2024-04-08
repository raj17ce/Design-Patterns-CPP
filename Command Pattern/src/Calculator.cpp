#include "../include/Calculator.h"
#include "../include/Command.h"

int Calculator::executeCommand(std::unique_ptr<Command> command) {
	current = command->execute(current);
	return current;
}

int Calculator::undoCommand(std::unique_ptr<Command> command) {
	current = command->undo(current);
	return current;
}