#include <iostream>
using namespace std;

int countSubSeq(int i, int sum, int cnt, int a[], int n){
    if (i == n) {
        if (sum == 0 && cnt > 0)
            return 1;
        else
            return 0;
    }
    int ans = 0;
    ans += countSubSeq(i + 1, sum, cnt, a, n);
    ans += countSubSeq(i + 1, sum + a[i], cnt + 1, a, n);
    return ans;
}
 
int main()
{
	int t;
	cin >>t;
	int a[t];
	for (int i=0;i<t;i++){
		cin >>a[i];
	}
    int n = sizeof(a) / sizeof(a[0]);
    cout << countSubSeq(0, 0, 0, a, t);
 
    return 0;
}
