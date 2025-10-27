#include "./array_function.c"
#include <stdlib.h>
#include <stdio.h>
int main(int argc,char** argv){
int dest[8];
size_t size_src1 = 4;
int src1[4] ={1,2,3,4};
size_t size_src2 = 4;
int src2[4] ={5,6,7,8}; 
join_int_arrays(src1,size_src1,src2,size_src2,dest);
for (int i = 0;i<8;i++){
printf("%d",dest[i]);
}
printf("\n");
return 0;
}