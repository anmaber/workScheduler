#pragma once

#include <iostream>
#include <string>
#include <vector>

class Employee
{
private:
    int _id;
    std::string _firstName;
    std::string _lastName;

public:
    Employee(int id, std::string firstName, std::string LastName);
    int getId();
    std::string getFirstName();
    std::string getLastName();
    ~Employee() = default;

};