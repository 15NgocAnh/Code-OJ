#include <bits/stdc++.h>
using namespace std;

int value(char c){
    if (c == 'I')
        return 1;
    if (c == 'V')
        return 5;
    if (c == 'X')
        return 10;
    if (c == 'L')
        return 50;
    if (c == 'C')
        return 100;
    if (c == 'D')
        return 500;
    if (c == 'M')
        return 1000;
}

int romanToDecimal(string s){
    int res = 0;
    for (int i=0;i<s.length();i++){
        int s1 = value(s[i]);
        if (i+1<s.length()){
            int s2 = value(s[i+1]);
            if (s1>=s2){
                res += s1;
            }
            else{
                res += (s2-s1);
                i++;
            }
        }
        else {
            res += s1;
        }
    }
    return res;
}

int main(){
    string s;
    while (gets(s)){
        cout<<romanToDecimal(s)<<endl;
    }
    return 0;
}
