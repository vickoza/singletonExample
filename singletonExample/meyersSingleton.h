#pragma once
#include <string>

class meyersSingleton final
{
	std::string value;
	meyersSingleton(std::string const& v) :value{ v } {}
public:
	static meyersSingleton* getInstance(std::string const& value);
	std::string getValue();
	meyersSingleton(meyersSingleton const&) = delete;
	meyersSingleton& operator =(meyersSingleton const&) = delete;
};