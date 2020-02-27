#pragma once

#include <iostream>
#include <string>

class Employee
{
private:
    int _id;
public:
    Employee(int id);
    int getId();
    ~Employee() = default;
};


