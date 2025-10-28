#include <stdio.h>
#include <stdlib.h>
int main(int argc, char** argv) {
    int num1[10][3];
    int num2[3][10];
    int res[10][10];
    for (int i = 0;i<10;i++){
        for (int k = 0;k<3;k++){
            scanf("%d",&num1[i][k]);
        }
    }
    for (int i = 0;i<3;i++){
        for (int k = 0;k<10;k++){
            scanf("%d",&num2[i][k]);
        }
    }
    for (int i = 0;i<10;i++){
        for (int k = 0;k<10;k++){
            int m=0;
                for (int j = 0;j<10;j++){
                    for (int l = 0;l<3;l++){
                        m+=num1[j][l]+num2[l][j];
                    }}
            res[i][k]=m;             
        }
    }
        for (int i = 0;i<10;i++){
        for (int k = 0;k<10;k++){
            printf("%d",res[i][k]);
        }
    }
    return 0;
}
