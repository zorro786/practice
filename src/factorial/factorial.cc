//
// Created by Abdul Qadeer on 6/19/19.
//
#include "factorial.hh"

#include <iostream>

    Factorial :: Factorial() {
        max_allowed_int = 1;
        for (int i = 1; ;i++) {
            if (INT_MAX/i < max_allowed_int) {
                break;
            }
            max_allowed_int *= i;
        }
    }

    bool Factorial :: checkValidInput(int n) {
        return n < 0 || n > max_allowed_int ? false : true;
    }

    int Factorial :: FactorialUsingRecursion(const int n) {
        if (!checkValidInput(n)) {
            return -1;
        }
        return n < 2 ? 1 : n * FactorialUsingRecursion(n - 1);
    }

    int Factorial :: FactorialUsingIteration(const int n) {
        if (!checkValidInput(n)) {
            return -1;
        }

        int result = 1;
        for (int i = 2; i <= n; i++) {
            result *= i;
        }

        return result;
    }