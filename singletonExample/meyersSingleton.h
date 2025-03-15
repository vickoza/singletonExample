#pragma once
#include <string>

class meyersSingleton final
{
	std::string value;
	int count; //new
	//meyersSingleton(std::string const& v) :value{ v } {}
	meyersSingleton(std::string const& v) :value{ v }, count { 0 } {}
public:
	static int getCount(meyersSingleton* sin) { return sin->count; } //new
	static meyersSingleton* getInstance(std::string const& value);
	std::string getValue();
	meyersSingleton(meyersSingleton const&) = delete;
	meyersSingleton& operator =(meyersSingleton const&) = delete;
};