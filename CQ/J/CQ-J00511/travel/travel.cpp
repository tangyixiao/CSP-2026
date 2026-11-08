#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool vis;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	//freopen("travel.txt","a",stdout);
	cin>>a>>b>>c>>d;
	if(a==c) cout<<1;
	else {cout<<"0000";return 0;}
	if(b.substr(0,2)==d.substr(0,2)) cout<<1;
	else cout<<0;
	if(b.substr(0,2)==d.substr(0,2)&&((b[2]<='C'&&d[2]<='C')||b[2]>='D'&&d[2]>='D')) cout<<1,vis=1;
	else cout<<0;
	if(!vis) cout<<0;
	else if((b[2]=='A'&&d[2]=='C')||(b[2]=='C'&&d[2]=='A')) cout<<0;
	else cout<<1;
	return 0;
 } //olo
