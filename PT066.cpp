#include <bits/stdc++.h>
using namespace std;

int main(int argc, char* argv[]) 
{
    if (argc > 1) 
		assert(freopen(argv[1], "r", stdin)); 
	if (argc > 2) 
		assert(freopen(argv[2], "wb", stdout));
	string str;
    while(getline(cin,str)){
        int thuong = 0, hoa = 0;
	    for (int i=0;i<str.length();i++){
	        if (str[i]>= 97 && str[i]<=122)
	            thuong++;
	        else if (str[i]>= 65 && str[i]<=90)
	            hoa++;
	    }
	    if (thuong>=hoa){
	        for (int i=0;i<str.length();i++){
	            str[i] = tolower(str[i]);
	        }
	    }
	    else{
	        for (int i=0;i<str.length();i++){
	            str[i] = toupper(str[i]);
	        }
	    }
        cout<<str<<endl;
    }
    return 0;
}
