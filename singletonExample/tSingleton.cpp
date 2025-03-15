#include "tSingleton.h"

tSingleton* tSingleton::getInstance(std::string const& value)
{
	if (instance == nullptr)
	{
		std::lock_guard<std::mutex> lock{ mutex };
		if (instance == nullptr)
			instance = new tSingleton(value);
	}
	++(instance->count);//new
	return instance;
}

tSingleton* tSingleton::instance = nullptr;
std::mutex tSingleton::mutex{};

std::string tSingleton::getValue()
{
	// TODO: Add your implementation code here.
	return value;
}
