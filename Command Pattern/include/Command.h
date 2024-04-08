#pragma once

class Command {
public:
	virtual ~Command() = default;
	virtual int execute(int i) = 0;
	virtual int undo(int i) = 0;
};