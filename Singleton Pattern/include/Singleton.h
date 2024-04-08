#pragma once

class Singleton {
public:
	static Singleton& instance();

	void setValue(int value) {
		m_Value = value;
	}

	int getValue() const {
		return m_Value;
	}

	Singleton(const Singleton&) = delete;
	Singleton operator =(const Singleton&) = delete;
private:
	Singleton() = default;

	int m_Value;
};