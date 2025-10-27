#include "../include/array_function.h"

void join_int_arrays(int *src1, size_t size_src1, int *src2, size_t size_src2, int *dest) {
    for(size_t i=0;i<size_src1+size_src2;i++){
        if (i<size_src1){
        dest[i]=src1[i];
            }
        else{
        dest[i]=src2[size_src1-i];
        }
}
    }

void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {}

void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {}

