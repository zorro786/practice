//
// Created by Abdul Qadeer on 2019-07-11.
//

#ifndef PRACTICE_MAX_SUBSEQUENCE_SUM_HH
#define PRACTICE_MAX_SUBSEQUENCE_SUM_HH

#include <vector>

/**
 * This class provides three functions to calculate max contiguous sum of an array with different algorithms
 */
class MaxSubsequenceSum {

private:
    /*
     * Static function to check if addition or subtraction of two integers overflows or underflows
     * Throws corresponding exception from standard library if out of bound
     */
    static void CheckOutOfBounds(int a, int b);

    /**
     * Private helper function for recursive divide and conquer
     * @param input vector of integers
     * @param start first index
     * @param end last index
     * @return Maximum contiguous subsequence sum
     */
    int FindMaxSumSequenceSumUsingDivideAndConquerHelper(const std::vector<int> input, int start, int end);

public:
    /**
     * A possible implementation of Kadane's algorithm which calculates maximum contiguous sum in O(n) time
     * and constant space complexity
     * @param input vector of integers
     * @return Maximum contiguous subsequence sum
     */
    int FindMaxSubsequenceSum(const std::vector<int> input);

    /**
     * A brute force algorithm which calculates maximum contiguous sum in O(n^3) time and constant space complexity
     * @param input vector of integers
     * @return Maximum contiguous subsequence sum
     */
    int FindMaxSubsequenceSumUsingBruteForce(const std::vector<int> input);

    /**
     * A Divide and conquer algorithm recursive implementation which calculates maximum contiguous sum in O(nlogn) time
     * and O(n) space complexity
     * @param input vector of integers
     * @return Maximum contiguous subsequence sum
     */
    int FindMaxSubsequenceSumUsingDivideAndConquer(const std::vector<int> input);
};


#endif //PRACTICE_MAX_SUBSEQUENCE_SUM_HH
