//
// Created by Abdul Qadeer on 6/22/19.
//

#include "factorial.hh"
#include "max_subsequence_sum.hh"
#include "array_rotation.hh"

#include <iostream>


void array_rotation_test(std::vector<int> input, int rotation_count) {
    std::vector<int> original(input);
    ArrayRotation arrayRotation;
    arrayRotation.rotate_array(input, rotation_count);
    int k = original.size();
    for (int i = rotation_count%original.size(), j = 0; k--; i = (i + 1)%original.size(), j++) {
        assert(original[j] == input[i]);
    }
}

void array_rotation_test_helper() {
    std::vector<int> input1 = {1, 2, 3, 4, 5};
    array_rotation_test(input1, 1);
    input1 = {1, 2, 3, 4, 5};
    array_rotation_test(input1, 2);
    input1 = {1, 2, 3, 4, 5};
    array_rotation_test(input1, 3);
    input1 = {1, 2, 3, 4, 5};
    array_rotation_test(input1, 4);
    input1 = {1, 2, 3, 4, 5};
    array_rotation_test(input1, 5);
    input1 = {1, 2, 3, 4, 5};
    array_rotation_test(input1, 6);

    std::vector<int> input2 = {1, 2, 3, 4, 5, 6};
    array_rotation_test(input2, 1);
    input2 = {1, 2, 3, 4, 5, 6};
    array_rotation_test(input2, 2);
    input2 = {1, 2, 3, 4, 5, 6};
    array_rotation_test(input2, 3);
    input2 = {1, 2, 3, 4, 5, 6};
    array_rotation_test(input2, 4);
    input2 = {1, 2, 3, 4, 5, 6};
    array_rotation_test(input2, 5);
    input2 = {1, 2, 3, 4, 5, 6};
    array_rotation_test(input2, 6);
    input2 = {1, 2, 3, 4, 5, 6};
    array_rotation_test(input2, 7);

    std::vector<int> input3 = {1};
    array_rotation_test(input3, 1);
}

int main() {
    array_rotation_test_helper();
}


