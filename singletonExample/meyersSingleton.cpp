#include "meyersSingleton.h"

meyersSingleton* meyersSingleton::getInstance(std::string const& value)
{
    static meyersSingleton instance{ value };
    ++instance.count;//new
    return &instance;
}

std::string meyersSingleton::getValue()
{
    return value;
}
