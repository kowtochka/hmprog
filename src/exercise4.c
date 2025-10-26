#include <stdio.h>
#include <stdlib.h>
int main(int argc,char** argv){
    int array[10];
    int i;
    int temp1;
    int X = atof(argv[0]);
    int K = atoi(argv[1]);
    for (i = 0;i<9;i++){
        scanf("%d",&array[i]);
    }
    for(i=0;i<10;i++){
        temp1 = array[K];
        array[9] = 0;
        array[K] = X;
    
    }
    for (i=0;i<10;i++){
        printf("%.d\n",array[i]);
    }
}