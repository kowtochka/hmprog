#include <stdio.h>
#include <stdlib.h>
int main(int argc,char** argv){
    float array[10];
    int i;
    int K = atoi(argv[0]);
    for (i = 0;i<9;i++){
        scanf("%f",&array[i]);
    }
    for(i=0;i<9;i++){
        if(K<0){
            int j;
            j = i+K;
            if(i<0){
                j=10+i;
                array[j] = array[i];
            }
            array[j] = array[i];
        }
        if (K>0)
        {i+=K;
        if (i>10){
            i = i-10;
        }
        printf("%.3f\n",array[i]);
    }
    }
}
