#include <stdio.h>
#define ll long long

void findSquareSum(int arr[][2], int N){
    ll x1 = 0, y1 = 0;
	ll x2 = 0, y2 = 0;

	ll sum = 0;

	for (int i = 0; i < N; i++) {
		int a, b;
		a = arr[i][0];
		b = arr[i][1];

		sum += x1;
		sum -= 2 * x2 * a;

		sum += i * (ll)(a * a);

		x1 += a * a;
		x2 += a;
		sum += y1;
		sum -= 2 * y2 * b;
		sum += i * (ll)b * b;

		y1 += b * b;
		y2 += b;
	}
    printf("%lld",sum);
}

void main(){
    int n;
    scanf("%d",&n);
    int arr[n][2];
    for (int i=0;i<n;i++){
        for (int j=0;j<2;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    findSquareSum(arr,n);
}

