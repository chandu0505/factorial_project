#ifndef FACTORIAL_H
#define FACTORIAL_H

inline int factorial(int n) {
    if (n == 0) return 1;
    return n * factorial(n - 1);
}

#endif // FACTORIAL_H
