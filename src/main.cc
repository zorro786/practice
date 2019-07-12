//
// Created by Abdul Qadeer on 6/22/19.
//

#include "factorial.hh"
#include "max_subsequence_sum.hh"

#include <iostream>

int main() {
    std::vector<int> test = {INT_MAX-10, INT_MIN+10, 0, -1, 5};
    MaxSubsequenceSum maxSubsequenceSum;
    int sum = maxSubsequenceSum.FindMaxSubsequenceSum(test);
    std::cout<<sum<<std::endl;
    sum = maxSubsequenceSum.FindMaxSubsequenceSumUsingBruteForce(test);
    std::cout<<sum<<std::endl;
    sum = maxSubsequenceSum.FindMaxSubsequenceSumUsingDivideAndConquer(test);
    std::cout<<sum<<std::endl;
}