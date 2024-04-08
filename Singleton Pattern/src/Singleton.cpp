#include "../include/Singleton.h"

Singleton& Singleton::instance() {
	static Singleton obj;
	return obj;
}