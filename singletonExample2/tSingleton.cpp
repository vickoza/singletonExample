#include "tSingleton.h"

tSingleton& tSingleton::getInstance(std::string const& value)
{
	if (instance == nullptr)
	{
		std::lock_guard<std::mutex> lock{ mutex };
		if (instance == nullptr)
			instance = new tSingleton(value);
	}
	return *instance;
}

tSingleton* tSingleton::instance = nullptr;
std::mutex tSingleton::mutex{};


std::string tSingleton::getValue()
{
	return value;
}
