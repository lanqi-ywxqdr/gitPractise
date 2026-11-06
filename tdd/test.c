#include "unity.h"
#include "calc.c"
#include "limits.h"

void setUp(void) {}     // Not needed yet
void tearDown(void) {}

void test_add(void) {
    TEST_ASSERT_EQUAL(4, add(2, 2));
    TEST_ASSERT_EQUAL(5, add(1, 4));
    TEST_ASSERT_EQUAL(-3, add(4, -7));
    TEST_ASSERT_EQUAL(INT_MAX, add(INT_MAX-1, 2));
}

void test_sub(void) {
    TEST_ASSERT_EQUAL(1, sub(2, 1));
    TEST_ASSERT_EQUAL(INT_MIN, sub(INT_MIN+1, 2));
}

void test_stringInput(void) {
    
}

int main(void) {
    UNITY_BEGIN();
    RUN_TEST(test_add);
    RUN_TEST(test_sub);
    return UNITY_END();
}
