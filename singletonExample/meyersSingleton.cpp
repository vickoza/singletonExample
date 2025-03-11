#include "meyersSingleton.h"

meyersSingleton* meyersSingleton::getInstance(const std::string& value)
{
    static meyersSingleton instance{ value };
    return &instance;
}

std::string meyersSingleton::getValue()
{
    return value;
}
