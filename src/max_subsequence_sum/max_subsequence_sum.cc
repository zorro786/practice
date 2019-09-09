//
// Created by Abdul Qadeer on 2019-07-11.
//

// This file implements functions to calculate maximum sub sequence sum using different algorithms

#include "max_subsequence_sum.hh"

#include <algorithm>
#include <stdexcept>
#include <numeric>

int MaxSubsequenceSum::FindMaxSubsequenceSum(const std::vector<int> input) {
    assert(input.size() > 0);

    int current_sum = input.front();
    int max_sum = current_sum;

    for (int i = 1; i < input.size(); i++) {
        CheckOutOfBounds(input[i], current_sum);
        current_sum = input[i] > current_sum + input[i] ? input[i] : current_sum + input[i];
        max_sum = std::max(current_sum, max_sum);
    }

    return max_sum;
}

int MaxSubsequenceSum::FindMaxSubsequenceSumUsingBruteForce(const std::vector<int> input) {
    assert(input.size() > 0);

    int max_sum = INT_MIN;

    for (int i = 0; i < input.size(); i++) {
        for (int j = i; j < input.size(); j++) {
            int current_sum = 0;
            for (int k = i; k <= j; k++) {
                CheckOutOfBounds(current_sum, input[k]);
                current_sum += input[k];
            }
            max_sum = std::max(max_sum, current_sum);
        }
    }

    return max_sum;
}

// Per Google C++ style exceptions shouldn't be used, it is okay for this small code
void MaxSubsequenceSum::CheckOutOfBounds(const int a, const int b) {
    if (a > 0) {
        if (INT_MAX - a < b) {
            throw std::overflow_error("Sum overflows int capacity!");
        }
    } else if (INT_MIN - a > b) {
            throw std::underflow_error("Sum underflows int capacity!");
    }
}