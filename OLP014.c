#include <stdio.h>

void count(int q[], int n, int a, int b){
    int cnt = 0;
    for (int i=a;i<=b;i++){
        for (int j=0;j<n;j++){
            if (i==q[j])
                cnt++;
        }
    }
    printf("%d\n",cnt);
}

void main(){
    int n, p;
    scanf("%d%d",&n,&p);
    int q[n+2];
    for (int i=0;i<n;i++){
        scanf("%d",&q[i]);
    }
    while (p--){
        int a,b;
        scanf("%d%d",&a,&b);
        q[n]=a;
        q[n+1]=b;
        for (int i=0;i<n+1;i++){
            for (int j=i+1;j<n+2;j++){
                if (q[i]>q[j]){
                    int t = q[i];
                        q[i] = q[j];
                        q[j] = t;
                }
            }
        }
        for (int i=0;i<n+2;i++){
            printf("%d ",q[i]);
        }
    }
}