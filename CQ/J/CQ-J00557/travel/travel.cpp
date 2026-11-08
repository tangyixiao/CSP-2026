#include <bits/stdc++.h>
using namespace std;
struct node{
	int su1,su2;
	char kind;
}r,x;
char ch[15]; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=10;i++)cin>>ch[i];
	r.kind=ch[5],x.kind=ch[10];
	r.su1=10*(ch[1]-'0')+(ch[2]-'0'),x.su1=10*(ch[6]-'0')+(ch[7]-'0');
	r.su2=10*(ch[3]-'0')+(ch[4]-'0'),x.su2=10*(ch[8]-'0')+(ch[9]-'0');
	if(r.su1!=x.su1){cout<<"0000";return 0;}
	cout<<"1";
	if(r.su2!=x.su2){cout<<"000";return 0;}
	cout<<"1";
	if((r.kind>'C'&&x.kind<='C')||(x.kind>'C'&&r.kind<='C')){cout<<"00";return 0;}
	cout<<"1";
	cout<<((abs(r.kind-x.kind)<=1)?"1":"0");
	return 0;
}
/*
难以绷住 
02 01A 02 01B
AC
已获得 100pts 
*/

