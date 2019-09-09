//
// Created by Abdul Qadeer on 2019-09-08.
//
// This file implements function to rotate an array

#include "array_rotation.hh"

void ArrayRotation::rotate_array(std::vector<int>& input, int rotation_count) {
    rotation_count = rotation_count % input.size();
    if (rotation_count == 0 || input.size() == 0) {
        return;
    }

    int n = input.size();
    int x = 1;
    while ((rotation_count*x)%n != 0) {
        x++;
    }

    int loop_counter = n/x;
    int i = 0;
    while (loop_counter--) {
        int number_to_rotate = input[(i + rotation_count) % n];
        input[(i + rotation_count) % n] = input[i];
        i = (i + 2 * rotation_count) % n;
        int period = x;
        while (--period) {
            int temp = input[i];
            input[i] = number_to_rotate;
            number_to_rotate = temp;
            i = (i + rotation_count) % n;
        }
        i++;
    }
}