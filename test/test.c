/*
 * =====================================================================================
 *
 *       Filename:  test.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  06/02/17 07:43:26
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  YOUR NAME (), 
 *   Organization:  
 *
 * =====================================================================================
 */
#include <stdlib.h>
#include <unity.h>
#include <unity_internals.h>
#include <kmu.h>

void test_success()
{
    TEST_ASSERT_EQUAL_STRING(HelloWorld(), "Hello World!");
}

int main(int argc, char** argv)
{
      UNITY_BEGIN();

      RUN_TEST(test_success);

      UNITY_END();
}
