#include<bits/stdc++.h>
using namespace std;
string a,b,x,y;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>x>>b>>y;
	if(a==b)
		cout<<1;
	else
		cout<<0;
	if(a==b&&x[0]==y[0]&&x[1]==y[1])
		cout<<1;
	else
		cout<<0;
	bool t1=x[2]<='C',t2=y[2]<='C';
	if(t1==t2&&a==b&&x[0]==y[0]&&x[1]==y[1])
		cout<<1;
	else
		cout<<0;
	if(t1==t2&&a==b&&abs(x[2]-y[2])==1&&x[0]==y[0]&&x[1]==y[1])
		cout<<1;
	else
		cout<<0;
	return 0;
}