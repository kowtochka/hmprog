#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
    float array[10];
    int i;
    for (i = 0;99>i;i++){
        scanf("%f",&array[9-i]);
    }
    for(i=0;i<9;i++){
        printf("%.f",array[i]);
    }
}