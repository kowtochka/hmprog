#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv){
    float array[10];
    int i;
    float a;
    for (i = 0;i<10;i++){
        scanf("%f",&array[i]);
        a+= array[i]; 
    }
    a = a/10;
    printf("%.3f\n",a);
    return 0;
}