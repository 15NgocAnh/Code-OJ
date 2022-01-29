#include <stdio.h>
#define e 1000000007

int tongCheo(int n){
    int a[n][n];
    int res = 1;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            a[i][j] = res++;
        }
    }
    int sum = 0;
    int sum1 = 0;
    for (int i=0;i<n;i++){
        for (int j=0;j<n;j++){
            if (i==j){
                sum += a[i][j];
                sum %= e;
            }
            else if (i==n-1-j){
                sum1 += a[i][j];
                sum %= e;
                if (i==j)
                    sum1 -= a[i][j];
                    sum %= e;
            }
        }
    }
    return (sum%e + sum1%e)%e;
}
void main(){
    int t;
    scanf("%d",&t);
    while (t--){
        int n;
        scanf("%d",&n);
        printf("%d\n",tongCheo(n));
    }
}