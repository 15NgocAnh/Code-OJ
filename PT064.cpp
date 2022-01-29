#include <bits/stdc++.h>
using namespace std;

void NhapMT(int a[][100], int n, int m){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            scanf("%d",&a[i][j]);
        }
    }
}
void XuatMT(int a[][100], int n, int m){
    for (int i=0;i<n;i++){
        for (int j=0;j<m;j++){
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
}
void BienDoiMT(int a[][100], int n, int m){
    bool row[n];
    bool col[m];
    for (int i=0;i<n;i++){
    	row[i] = 0;
	}
	for (int i=0;i<m;i++){
    	col[i] = 0;
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if (a[i][j]==1){
				row[i]=1;
				col[j]=1;
			}
		}
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<m;j++){
			if (row[i]==1 || col[j]==1)
				a[i][j]=1;
		}
	}
}
int main(){
    int n,m;
    scanf("%d%d",&n,&m);
    int a[100][100];
    NhapMT(a,n,m);
    BienDoiMT(a,n,m);
    XuatMT(a,n,m);
    return 0;
}
