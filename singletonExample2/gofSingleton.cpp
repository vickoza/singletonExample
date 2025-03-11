#include "gofSingleton.h"

gofSingleton& gofSingleton::getInstance(const std::string& value)
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
