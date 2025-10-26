#include <stdio.h>
#include <stdlib.h>
int main(int argc,char** argv){
    double array[10];
    int i;
    double temp1;
    double X = atof(argv[0]);
    int K = atoi(argv[1]);
    for (i = 0;i<9;i++){
        scanf("%lf",&array[i]);
    }
    for(i=0;i<10;i++){
        temp1 = array[K];
        array[9] = 0;
        array[K] = X;
        while(9-i>K){
            if(9-i == K+1){
                array[9-i] = temp1;
            }
            if(9-i!=K+1){
                array[9-i] = array[9-1-i];
           }
        }
    }
    for (i=0;i<10;i++){
        printf("%.3lf\n",array[i]);
    }
}