#include <stdio.h>
#include <string.h>

// int val[] = {1,5,10,50,100,500,1000};
// char s[] = "IVXLCDM";

// int layThuTu(char c){
//     for (int i=0;i<7;i++){
//         if (s[i]==c)
//             return i;
//     }
// }
// int LaMa(char c[]){
//     int n = strlen(c);
//     int res = val[layThuTu(c[n-1])];
//     for (int i=n-1;i>0;i--){
//         int pos1 = layThuTu(c[i]);
//         int pos2 = layThuTu(c[i-1]);
//         if (val[pos1]<=val[pos2])
//             res += val[pos2];
//         else
//             res -= val[pos2];
//     }
//     return res;
// }

void main(){
    char c[10];
    while (scanf("%s",&c)){
        int n = strlen(c);
        for (int i=0;i<n;i++){
            if (c[i]=='I')
                c[i] = 1;
            else if (c[i]=='V')
                c[i] = 5;
            else if (c[i]=='X')
                c[i] = 10;
            else if (c[i]=='L')
                c[i] = 50;
            else if (c[i]=='C')
                c[i] = 100;
            else if (c[i]=='D')
                c[i] = 500;
            else if (c[i]=='M')
                c[i] = 1000;
        }
        int res = c[n-1];
        for (int i=n-1;i>0;i--){
            if (c[i]<=c[i-1])
                res += c[i-1];
            else
                res -= c[i-1];
        }
        printf("%d\n",res);
    }
}