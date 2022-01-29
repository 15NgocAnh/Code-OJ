#include <bits/stdc++.h>
using namespace std;
#define e 1000000007
#define ll long long

ll solve(ll n){
    return ((n%e)*((n+1)%e)*((n+2)%e)*((n+3)%e))/(4%e);
}

int main(){
    ll n;
    cin >>n;
    cout <<solve(n);
    return 0;
}
