#include <stdio.h>
#define ll long long

void main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for (int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    ll sum = 0;
    ll b[n];
    b[0] = a[0];
    for(int i = 1; i<n; i++)
        b[i] = b[i-1] + a[i];
    for(int i = 0; i<n-1; i++)
        sum += a[i] * (b[n-1] - b[i]);
    printf("%lld",sum);
}