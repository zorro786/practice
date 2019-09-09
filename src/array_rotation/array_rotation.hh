//
// Created by Abdul Qadeer on 2019-09-08.
//

#ifndef PRACTICE_ARRAYROTATION_HH
#define PRACTICE_ARRAYROTATION_HH

#include <vector>

/**
 * This class provides a method to rotate an array efficiently
 */
class ArrayRotation {
public:
    /**
     * O(n) running time algorithm to rotate an array with O(1) space
     * The algorithm is simple in the sense it iterates through the array and keeps rotating the elements per rotation_count
     * If the input is thought of as a circular array, it can be reduced to finding out the periodicity of rotation_count.
     * This helps us to find out how many elements are *touched* during first period iteration and how many more need rotation.
     * @param input
     * @param rotation_count
     */
    void rotate_array(std::vector<int>& input, int rotation_count);
};


#endif //PRACTICE_ARRAYROTATION_HH
