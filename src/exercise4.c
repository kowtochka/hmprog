#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
double array[10];
double X = atof(argv[1]);
int K = atoi(argv[0]);
  for (i = 0;i<10;i++){
        scanf("%lf",&array[i]);
    }
for(int i=9;i>K;i--){
    array[i] = array[i-1];
}
array[K] = X;
 for (i=0;i<10;i++){
        printf("%lf\n",array[i]);
    }
    return 0;
}