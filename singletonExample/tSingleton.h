#pragma once
#include <mutex>
#include <string>

class tSingleton
{
	std::string value;
	int count; //new
	static tSingleton* instance;
	static std::mutex mutex;
	//tSingleton(std::string const& v) :value{ v } {}
	tSingleton(std::string const& v) :value{ v }, count{0} {}
public:
	static int getCount(tSingleton* sin) { return sin->count; } //new
	static tSingleton* getInstance(const std::string& value);
	std::string getValue();
	tSingleton(tSingleton const&) = delete;
	tSingleton& operator =(tSingleton const&) = delete;
};