//
// Created by Abdul Qadeer on 6/22/19.
//

#ifndef PRACTICE_FACTORIAL_FACTORIAL_H_
#define PRACTICE_FACTORIAL_FACTORIAL_H_

#endif //PRACTICE_FACTORIAL_FACTORIAL_H_

/**
 * This class provides methods to calculate factorial of a number whose result can fit in int type
 */
class Factorial {
private:
    int max_allowed_int;
    bool checkValidInput(int n);
public:
    Factorial();
    /**
     * Calculates factorial using recursion in O(n) time with O(n) space
     * @param n Non negative number whose factorial needs to be calculated
     * @return factorial value, -1 if invalid input or overflow
     */
    int FactorialUsingRecursion(const int n);
    /**
     * Calculates factorial using iteration in O(n) time with O(1) space
     * @param n Non negative number whose factorial needs to be calculated
     * @return factorial, -1 if invalid input or overflow
     */
    int FactorialUsingIteration(const int n);
};
