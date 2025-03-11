#pragma once
#include <string>

class meyersSingleton final
{
	std::string value;
	meyersSingleton(std::string const& v) :value{ v } {}
public:
	static meyersSingleton* getInstance(const std::string& value);
	std::string getValue();
};

