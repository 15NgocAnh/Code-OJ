#include <stdio.h>
#include <math.h>
#define e 1000000007

long long fibo(long long n){
    if (n<=1)
        return n;
    else {
        long long fn1 = 1, fn2 = 0, fn;
        for (int i=2;i<=n;i++){
            fn = fn1 + fn2;
            fn %= e;
            fn2 = fn1;
            fn1 = fn;
        }
        return fn;
    }
}
void main(){
    long long n;
    scanf("%lld",&n);
    printf("%lld",fibo(n));
}