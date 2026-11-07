#include<bits/stdc++.h>
using namespace std;
struct node{
	string s;
	int n,m,c;
}a,b;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a.c>>a.s>>b.c>>b.s;
	int x=0;
	for(int i=0;i<=1;i++){
		x*=10;
		x+=a.s[i]-'0';
	}
	a.n=x;a.m=a.s[2]-'A';
	x=0;
	for(int i=0;i<=1;i++){
		x*=10;
		x+=b.s[i]-'0';
	}
	b.n=x;b.m=b.s[2]-'A';
	if(a.c==b.c) cout<<1;
	else cout<<0;
	if(a.c==b.c&&a.n==b.n) cout<<1;
	else cout<<0;
	if(a.c==b.c&&a.n==b.n&&!((a.m==2&&b.m==3)||(a.m==3&&b.m==2))) cout<<1;
	else cout<<0;
	if(a.c==b.c&&a.n==b.n&&(abs(a.m-b.m)==1||(a.m==3&&b.m==5)||(a.m==5&&b.m==3))&&!((a.m==2&&b.m==3)||(a.m==3&&b.m==2))) cout<<1;
	else cout<<0;
	return 0;
}
