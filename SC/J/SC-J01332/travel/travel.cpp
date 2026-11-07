#include<bits/stdc++.h>
using namespace std;
string x,y,u,v;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>x>>y>>u>>v;
	int a=(x==u),b=0,c=0,d=0;
	if((a&&y[0]==v[0])&&y[1]==v[1])b=1;
	if(b&&int(y[2]+v[2])!=135)c=1;
	if(c&&int(y[2]+v[2])%2==1)d=1;
	cout<<a<<b<<c<<d;
	
	return 0;
}