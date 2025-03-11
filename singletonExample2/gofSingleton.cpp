#include "gofSingleton.h"

gofSingleton& gofSingleton::getInstance(std::string const& value)
{
	if (instance == nullptr)
		instance = new gofSingleton(value);
	return *instance;
}

gofSingleton* gofSingleton::instance = nullptr;

std::string gofSingleton::getValue()
{
	return value;
}
