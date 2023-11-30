#pragma once

#include <iostream>

using namespace std;

class EasyCIO
{
    void print(string arg) 
    {
        cout << arg;
    }

    void println(string arg) 
    {
        cout << arg << "\n";
    }
};

extern EasyCIO Con;