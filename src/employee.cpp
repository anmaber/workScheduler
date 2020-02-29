#include "employee.hpp"

Employee::Employee(int id, std::string firstName, std::string LastName)
    : _id(id),
      _firstName(firstName),
      _lastName(LastName)
{}

int Employee::getId()
{
    return _id;
    
}

std::string Employee::getFirstName()
{
    return _firstName;
}

std::string Employee::getLastName()
{
    return _lastName;
}