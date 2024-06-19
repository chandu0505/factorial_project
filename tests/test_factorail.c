#include <assert.h>
#include "factorial.h"

void test_factorial() {
    assert(factorial(0) == 1);
    assert(factorial(1) == 1);
    assert(factorial(2) == 2);
    assert(factorial(3) == 6);
    assert(factorial(4) == 24);
    assert(factorial(5) == 120);
}

int main() {
    test_factorial();
    printf("All tests passed.\n");
    return 0;
}
