#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int u,v,x,y;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c)u=1;
	else u=0;
	if(u&&b[0]==d[0]&&b[1]==d[1])v=1;
	else v=0;
	if(v&&b[2]<='C'&&d[2]<='C'||b[2]>'C'&&d[2]>'C')x=1;
	else x=0;
	int l=b[2]-'A',r=d[2]-'A';
	if(x&&abs(l-r)==1)y=1;
	else y=0;
	cout<<u<<v<<x<<y;
	return 0;
}