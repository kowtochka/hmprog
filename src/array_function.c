#include "../include/array_function.h"
#include <stdlib.h>
#include <stdio.h>
void join_int_arrays(int *src1, size_t size_src1, int *src2, size_t size_src2, int *dest) {
    for(size_t i=0;i<size_src1;i++){
        dest[i]=src1[i];
            }
    for(size_t i=0;i<size_src2;i++){
        dest[i+size_src1]=src2[i];

    }
}
void join_and_sort_int_arrays(int* src1, size_t size_src1, int* src2, size_t size_src2, int* dest) {
        for(size_t i=0;i<size_src1;i++){
        dest[i]=src1[i];
            }
    for(size_t i=0;i<size_src2;i++){
        dest[i+size_src1]=src2[i];
    }
      for (size_t step = 0; step < (size_src1+size_src2) - 1; ++step) {
    int swap = 0;
    for (int i = 0; i < (size_src1+size_src2) - step - 1; ++i) {
      if (dest[i] > dest[i + 1]) {
        int temp = dest[i];
        dest[i] = dest[i + 1];
        dest[i + 1] = temp;
        swap = 1;
      }
    }
    if (swap == 0) {
      break;
    }
  }

void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {
    int tm[2];
    for(size_t i=0;i<size;i++){
        tm[1] = src[i+1];
        if(tm[1]<src[i]){
            tm[1]=src[i];
        }
    }
    for(size_t i=0;i<size;i++){
        tm[0] = src[i+1];
        if(tm[0]>src[i]){
            tm[0]=src[i];
        }
    }
    *max=tm[1];
    *min=tm[0];
}

