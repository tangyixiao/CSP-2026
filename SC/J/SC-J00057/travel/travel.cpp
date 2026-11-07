#include<bits/stdc++.h>
using namespace std;
int e[266];
string a,b,c,d;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	e[(int)'A']=e[(int)'B']=e[(int)'C']=1;
	e[(int)'D']=e[(int)'E']=2;
	if(a==c) cout<<1;
	else cout<<0;
	if(a==c&&b[0]==d[0]&&b[1]==d[1]) cout<<1;
	else cout<<0;
	if(a==c&&b[0]==d[0]&&b[1]==d[1]&&e[(int)b[2]]==e[(int)d[2]]) cout<<1;
	else cout<<0;
	if(a==c&&b[0]==d[0]&&b[1]==d[1]&&e[(int)b[2]]==e[(int)d[2]]&&abs((int)b[2]-(int)d[2])==1) cout<<1;
	else cout<<0;
	return 0;
}