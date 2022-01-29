#include <stdio.h>

void main(){
    int t;
    scanf("%d",&t);
    int a, b;
    while(t--){
        scanf("%d%d",&a,&b);
        if ((a+b)%3==0 && 2*a>=b && 2*b>=a)
            printf("YES\n");
        else    printf("NO\n");
    }
}