#include <stdio.h>

int soSieuMayMan(int n){
    int dv, cnt4 = 0, cnt7 = 0;
    while (n>0){
        dv = n%10;
        if (dv!=4 && dv!=7)
            return 0;
        else {
            if (dv == 7)
                cnt7++;
            else 
                cnt4++;
        } 
        n/=10;
    }
    if (cnt4==cnt7)
        return 1;
    else
        return 0;
}
void duyet(int n){
    for (int i = n;;i++){
        if (soSieuMayMan(i)){
            printf("%d\n",i);
            break;
        }
    }
}
void main(){
    int t;
    scanf("%d",&t);
    int a[t];
    for (int i=0;i<t;i++){
        scanf("%d",&a[i]);
    }
    for (int i=0;i<t;i++){
        duyet(a[i]);
    }
}