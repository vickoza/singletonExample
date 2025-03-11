#pragma once
#include <mutex>
#include <string>

class tSingleton
{
	std::string value;
	static tSingleton* instance;
	static std::mutex mutex;
	tSingleton(std::string const& v) :value{ v } {}
public:
	static tSingleton& getInstance(std::string const& value);
	std::string getValue();
};


