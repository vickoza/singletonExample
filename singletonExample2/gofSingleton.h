#pragma once
#include <string>

class gofSingleton
{
	std::string value;
	static gofSingleton* instance;
	gofSingleton(std::string const& v) :value{ v } {}
public:
	static gofSingleton& getInstance(std::string const& value);
	std::string getValue();
	gofSingleton(gofSingleton const&) = delete;
	gofSingleton& operator =(gofSingleton const&) = delete;
};

