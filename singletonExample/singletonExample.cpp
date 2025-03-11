// singletonExample.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include "gofSingleton.h"
#include "meyersSingleton.h"
#include "tSingleton.h"
#include <thread>
#include <iostream>

void GoFFoo() {
    // Following code emulates slow initialization->
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    auto singleton = gofSingleton::getInstance("FOO");
    std::cout << singleton->getValue() << "\n";
}

void GoFBar() {
    // Following code emulates slow initialization->
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    auto singleton = gofSingleton::getInstance("BAR");
    std::cout << singleton->getValue() << "\n";
}
void MeyersFoo() {
    // Following code emulates slow initialization->
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    auto singleton = meyersSingleton::getInstance("FOO");
    std::cout << singleton->getValue() << "\n";
}

void MeyersBar() {
    // Following code emulates slow initialization->
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    auto singleton = meyersSingleton::getInstance("BAR");
    std::cout << singleton->getValue() << "\n";
}
void ThreadFoo() {
    // Following code emulates slow initialization->
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    auto singleton = tSingleton::getInstance("FOO");
    std::cout << singleton->getValue() << "\n";
}

void ThreadBar() {
    // Following code emulates slow initialization->
    std::this_thread::sleep_for(std::chrono::milliseconds(1000));
    auto singleton = tSingleton::getInstance("BAR");
    std::cout << singleton->getValue() << "\n";
}


int main()
{
    {
        std::cout << "Gang of Four:\n";
        std::jthread t1{ GoFFoo };
        std::jthread t2{ GoFBar };
    }
    {
        std::cout << "Meyers:\n";
        std::jthread t3{ MeyersFoo };
        std::jthread t4{ MeyersBar };
    }
    {
        std::cout << "Thread:\n";
        std::jthread t5{ ThreadFoo };
        std::jthread t6{ ThreadBar };
    }
    std::cout << "Hello World!\n";
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
