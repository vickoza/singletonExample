#pragma once
#include <string>

class gofSingleton
{
	std::string value;
	static gofSingleton* instance;
	gofSingleton(std::string const& v) :value{ v } {}
public:
	static gofSingleton& getInstance(const std::string& value);
	std::string getValue();
};

