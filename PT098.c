#include <bits/stdc++.h>
using namespace std;
#define e 1000000007
#define ll long long

ll solve(ll n){
    return ((n*(n+1)*(n+2)*(n+3)%e)/(4%e))%e;
}

int main(){
    ll n;
    cin >>n;
    cout <<solve(n);
    return 0;
}
