#include "meyersSingleton.h"

meyersSingleton& meyersSingleton::getInstance(std::string const& value)
{
    static meyersSingleton instance{ value };
    return instance;
}

std::string meyersSingleton::getValue()
{
    return value;
}
