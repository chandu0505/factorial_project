#include <stdio.h>
#include "factorial.h"

void test_factorial() {
    int test_cases[][2] = {
        {0, 1},
        {1, 1},
        {2, 2},
        {3, 6},
        {4, 24},
        {5, 120},
        {-1, -1} // End of test cases
    };

    for (int i = 0; test_cases[i][0] != -1; ++i) {
        int input = test_cases[i][0];
        int expected = test_cases[i][1];
        int result = factorial(input);

        if (result == expected) {
            printf("Test passed for input %d: Expected %d, Got %d\n", input, expected, result);
        } else {
            printf("Test failed for input %d: Expected %d, Got %d\n", input, expected, result);
        }
    }
}

int main() {
    test_factorial();
    return 0;
}
