#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a,a1,b,b1;
	char x,y;
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>a1>>x>>b>>b1>>y;
	if(a==b){
		cout<<1;
	}else{
		cout<<0<<0<<0<<0;
		return 0;
	}
	if(a1==b1){
		cout<<1;
	}else{
		cout<<0<<0<<0;
		return 0;
	}
	int n,m;
	n=x-'A';
	m=y-'A';
	if((x=='C' && y=='D') || (x=='D' && y=='C')){
		cout<<0<<0;
		return 0;
	}
	cout<<1;
	if(max(n,m)-min(n,m)<=1)
	{
		cout<<1;
	}else{
		cout<<0;
	}
	return 0;
} 
