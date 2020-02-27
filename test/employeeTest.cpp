#include <gtest/gtest.h>
#include "employee.hpp"

struct EmployeeTest : public::testing::Test
{
    Employee employee{1};
};

TEST_F(EmployeeTest, whenIdIs1returns1)
{
    ASSERT_EQ(employee.getId(),1);
}