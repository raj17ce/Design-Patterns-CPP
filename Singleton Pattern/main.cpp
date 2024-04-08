#include <iostream>
#include "./include/Singleton.h"

int main() {
	std::cout<<Singleton::instance().getValue()<<'\n';

	Singleton::instance().setValue(7);

	std::cout<<Singleton::instance().getValue()<<'\n';

	Singleton::instance().setValue(10);

	std::cout<<Singleton::instance().getValue()<<'\n';

	Singleton::instance().setValue(18);

	std::cout << Singleton::instance().getValue() << '\n';
}