#include <bits/stdc++.h>
using namespace std;

int indexOfa(int q[], int n, int a){
    int l = 0, r = n-1;
    while (l<=r){
    	int mid = (r+l)/2;
    	if (a<=q[mid])	
    		r = mid-1;
    	else
    		l = mid+1;
	}
	return l;
}

int indexOfb(int q[], int n, int b){
    int l = 0, r = n-1;
    while (l<=r){
    	int mid = (r+l)/2;
    	if (b>=q[mid])	
    		l = mid+1;
    	else
    		r = mid-1;
	}
	return r;
}

int count(int q[], int n, int a, int b){
	return indexOfb(q,n,b) - indexOfa(q,n,a) + 1;
}

int main(){
    int n, p;
    cin >>n>>p;
    int q[n];
    for (int i=0;i<n;i++){
        cin >> q[i];
    }
    while (p--){
        int a,b;
        cin >>a>>b;
        sort(q, q + n);
        cout << count(q,n,a,b)<<endl;
    }
    return 0;
}
