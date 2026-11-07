#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	bool a,b,c,d;
	a=c1==c3;
	b=(c2[0]==c4[0])&&(c2[1]==c4[1]);
	b&=a;
	c=(c2[2]<='C'&&c4[2]<='C')||(c2[2]>='D'&&c4[2]>='D');
	c&=b;
	d=(c2[2]==c4[2]-1)||(c2[2]==c4[2]+1)||(c2[2]>='D'&&c4[2]>='D');
	d&=c;
	cout<<a<<b<<c<<d;
	return 0;
} 