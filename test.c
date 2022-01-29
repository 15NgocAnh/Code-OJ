#include <stdio.h>

void main(){
    int a[2][3][5][8];

    for (int i=0;i<2;i++){
        for(int j=0;j<3;j++){
            for(int k=0;k<5;k++){
                for (int l=0;l<8;l++){
                    printf("a[",i);
                    printf("][",j);
                    printf("][",k);
                    printf("][",l);
                    printf("]");
                }
            }
        }
        printf("\n");
    }
}