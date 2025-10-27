#include "./array_function.c"
#include <stdlib.h>
#include <stdio.h>
int main(int argc,char** argv){
int src[10]={1,2,3,4,5,6,7,8,9,10};
size_t size=10;
int* min = malloc(128);
int* max = malloc(128);
get_min_and_max_from_int_array(src,size,min,max);
printf("%d, %d\n",*min,*max);
return 0;
}