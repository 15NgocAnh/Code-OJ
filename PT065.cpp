#include <bits/stdc++.h>
using namespace std;


int thongKe(string str){
    for (int i=0;i<str.length();i++){
        str[i] = tolower(str[i]);
    }
    int count = 0;
    for (int i=0;i<str.length();i++){
        if (str[i] == 'a' || str[i] =='o' || str[i] =='y' || str[i] == 'i' || str[i] =='e'|| str[i] =='u')
            count++;
    }
    return count;
}

int main(int argc, char* argv[]){
	
	if (argc > 1) 
		assert(freopen(argv[1], "r", stdin)); 
	if (argc > 2) 
		assert(freopen(argv[2], "wb", stdout));
	
    string str;
    while (getline(cin,str)){
        cout<<thongKe(str)<<endl;
    }
    return 0;
}


