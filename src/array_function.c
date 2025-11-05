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
    for(size_t i=0;i<size_src1;i++) {
    dest[i] = src1[i];
}
for(size_t i=0;i<size_src2;i++) {
    dest[i+size_src1] = src2[i];
}
size_t n=0;
while(n<(size_src1+size_src2)-1){
    n=0;
    size_t i=0;
    for(i;i<size_src1+size_src2 -1;i++){
        if (dest[i]>dest[i+1]){
            int a=dest[i];
            dest[i]=dest[i+1];
            dest[i+1]=a;
            i=0;
        }else {
        n+=1;
        }
    }
    
}
}

void get_min_and_max_from_int_array(int* src, size_t size, int* min, int* max) {
    size_t n=0;
while(n<size-1){
    n=0;
    size_t i=0;
    for(i;i<size -1;i++){
        if (src[i]>src[i+1]){
            int a=src[i];
            src[i]=src[i+1];
            src[i+1]=a;
            i=0;
        }else {
        n+=1;
        }
    }
}
*min=src[0];
*max=src[size-1];
}
