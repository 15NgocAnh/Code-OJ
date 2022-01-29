#include <bits/stdc++.h>
using namespace std;

int ptbac2(int a, int b, int c, float *x1, float *x2){
	int delta = b*b - 4*a*c;
	if (delta<0)	return -1;
	else if (delta==0){
		*x1 = *x2 = -b/(2*a);
		return 0;	
	}
	else{
		*x1 = (-b + sqrt(delta))/(2*a);
		*x2 = (-b - sqrt(delta))/(2*a);
		return 1;
	}
}

int main()
{
	int a, b, c;
	float x1, x2;
	do{
		cout <<"Nhap vao a: ";
		cin >>a;
		cout <<"Nhap vao b: ";
		cin >>b;
		cout <<"Nhap vao c: ";
		cin >>c;
		if (a==0)
			cout<<"\nNhap gia tri khong thoa man. Vui long nhap lai!"<<endl;
	} while (a==0);
	int x = ptbac2(a,b,c,&x1,&x2);
	if (x==-1)
		cout <<"Phuong trinh vo nghiem\n";
	else if (x==0)
		cout<<"Phuong trinh co nghiem kep x = "<<fixed<<setprecision(2)<<x1<<endl;
	else
		cout <<"Phuong trinh co hai nghiem phan biet x1 = "<<fixed<<setprecision(2)<<x1<<", x2 = "<<x2<<endl;
	return 0;
}
