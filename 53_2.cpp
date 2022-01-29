#include <bits/stdc++.h>
using namespace std;

void solve(int a[], int n){
    int b[n];
    copy(a,a+n,b);
    for (int i=0;i<n-1;i++){
        for (int j=i+1;j<n;j++){
            if (b[i]<b[j]){
                int t = b[i];
                    b[i] = b[j];
                    b[j] = t;
            }
        }
    }
    int rank = 1;
    map<int,int> mp;
    for (int i=0;i<n;i++){
        int ans = b[i];
        if (mp[ans]==0){
        	mp[ans] = rank;
        }
        rank++;
    }
    for (int i=0;i<n;i++){
        int ans = a[i];
        a[i] = mp[a[i]];
    }
}

int main(){
    int n;
    cin >>n;
    int a[n];
    for (int i=0;i<n;i++){
    	cin >>a[i];
	}
    solve(a,n);
    for (int i=0;i<n;i++){
        cout <<a[i]<<endl;
    }
    return 0;
}
