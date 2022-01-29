#include <stdio.h>
#define mod 1000000007
#define ll long long

void NhanHaiMaTran(ll F[2][2], ll M[2][2]){
    ll x = (F[0][0]*M[0][0]%mod + F[0][1]*M[1][0]%mod)%mod;
    ll y = (F[0][0]*M[0][1]%mod + F[0][1]*M[1][1]%mod)%mod;
    ll z = (F[1][0]*M[0][0]%mod + F[1][1]*M[1][0]%mod)%mod;
    ll k = (F[1][0]*M[0][1]%mod + F[1][1]*M[1][1]%mod)%mod;
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = k;
}

void solve(ll F[2][2], ll n){
    // ll M[2][2] = {{1,1},{1,0}};
    ll res[2][2] = {{1,1},{1,1}};
    while (n){
        if (n%2==1){
            NhanHaiMaTran(res,F);
        }
        n/=2;
        NhanHaiMaTran(F,F);
    }
    res[0][0] = F[0][0];
    res[0][1] = F[0][1];
    res[1][0] = F[1][0];
    res[1][1] = F[1][1];
}

ll fib(ll n){
    ll F[2][2] = {{1,1},{1,0}};
    if (n==0)
        return 0;
    solve(F,n-1);
    return F[0][0];
}

void main(){
    ll n;
    scanf("%lld",&n);
    printf("%lld",fib(n));
}