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
        for(size_t i=0;i<size_src1+size_src2;i+=2){
        int temp1=src1[i];
        int temp2=src2[i];
    if (temp1>temp2){
        dest[i]=temp2;
    }
    if (temp1<temp2){
        dest[i]=temp1;
    }    
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

