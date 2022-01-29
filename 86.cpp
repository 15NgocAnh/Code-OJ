#include<bits/stdc++.h>
using namespace std;

void leftrotate(string &s, int d)
{
	reverse(s.begin(), s.begin()+d);
	reverse(s.begin()+d, s.end());
	reverse(s.begin(), s.end());
}

int main()
{
	int n;
	cin >>n;
	string str;
	getline(cin,str);
	leftrotate(str, n);
	cout << str << endl;
	return 0;
}

