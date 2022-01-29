#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1000000007

void mul(ll a[2][2], ll b[2][2]){
    ll res[2][2];
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            res[i][j] = 0;
            for (int k = 0; k < 2; k++){
                res[i][j] += a[i][k] * b[k][j] % mod;
            }
        }
    }
    for (int i = 0; i < 2; i++){
        for (int j = 0; j < 2; j++){
            a[i][j] = res[i][j];
        }
    }
}

void binpow( ll n ){
    ll res[2][2] = {{1, 0}, {0, 1}};
    ll a[2][2] = {{1, 1}, {1, 0}};
    while (n){
        if (n % 2 == 1){
            mul (res, a);
        }
            mul (a, a);
            n /= 2;
    }
    cout << res[1][0];
}

int main(){
    ll n;
    cin >> n;
    binpow(n);
    return 0;
}
