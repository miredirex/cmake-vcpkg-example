#pragma once

#include <string>
#include <iostream>
#include <ctime>

struct Document
{
    std::string author;
    std::time_t date;
    std::string title;
    std::string body;

    void print(std::ostream& output) const;
};