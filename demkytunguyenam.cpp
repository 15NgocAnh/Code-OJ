#include <bits/stdc++.h>
using namespace std;

void count(string str)
{
    int cnt = 0;
    map<char,int> c;
    for (int i = 0; i < str.length(); i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' || str[i] == 'o' || str[i] == 'u' || str[i] == 'A' || str[i] == 'E' || str[i] == 'I' || str[i] == 'O' || str[i] == 'U')
            c[str[i]]=1;
    }
    for (int i=0;i<str.length();i++){
    	if (c[str[i]]==1)
    		cnt++;
    	c[str[i]]=0;
	}
    cout << cnt;
}
 
int main(int argc, char* argv[]) 
{
    if (argc > 1) 
		assert(freopen(argv[1], "r", stdin)); 
	if (argc > 2) 
		assert(freopen(argv[2], "wb", stdout));
	string str;
    getline(cin,str);
    count(str);
    return 0;
}
