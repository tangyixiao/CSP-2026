#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int rx,rz,xx,xz;
char r,x;
int main (){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	rx=((c1[0]-'0')*10+(c1[1]-'0'));
	rz=((s1[0]-'0')*10+(s1[1]-'0'));
	xx=((c2[0]-'0')*10+(c2[1]-'0'));
	xz=((s2[0]-'0')*10+(s2[1]-'0'));
	r=s1[2],x=s2[2];
	cout << (rx==xx);
	cout << (rx==xx && rz==xz);
	cout << (rx==xx && rz==xz && ((r<='C' && x<='C')||(r>='D' && x>='D')));
	cout << (rx==xx && rz==xz && ((r<='C' && x<='C')||(r>='D' && x>='D')) && abs(r-x)==1);
	return 0;
} 
