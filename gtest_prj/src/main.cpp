#include <windows.h>
#include <stdio.h>

#include <gtest/gtest.h>

#include "test_add.h"

TEST(testcase, test0)
{
 	EXPECT_EQ(add_func(2, 4), 6);
 }

int main(int argc, char **argv)
{
	testing::InitGoogleTest(&argc, argv);
	(void)RUN_ALL_TESTS();
	system("pause");
	return 0;
}