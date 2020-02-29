#include <gtest/gtest.h>
#include "employee.hpp"

struct EmployeeTest : public::testing::Test
{
    Employee employee{1,"Anna","Nowak"};
};

TEST_F(EmployeeTest, employeePersonalDataInitializesCorrectly)
{
    ASSERT_EQ(employee.getId(),1);
    ASSERT_EQ(employee.getFirstName(),"Anna");
    ASSERT_EQ(employee.getLastName(),"Nowak");
}