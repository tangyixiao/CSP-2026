#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int a,b;
string as,bs;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>as>>b>>bs;
	int ap=0,bp=0;
	ap=(as[0]-'0')*10+(as[1]-'0');
	bp=(bs[0]-'0')*10+(bs[1]-'0');
	bool tx=a==b;
	bool tp=ap==bp;
	bool tc=(as[2]<='C'&&bs[2]<='C')||(as[2]>='D'&&bs[2]>='D');
	if(tx) cout<<1;
	else cout<<0;
	if(tx&&tp) cout<<1;
	else cout<<0;
	if(tx&&tp&&tc) cout<<1;
	else cout<<0;
	if(tx&&tp&&tc&&(as[2]-1==bs[2]||bs[2]-1==as[2])) cout<<1;
	else cout<<0;
	return 0;
}