#include<bits/stdc++.h>
#define int long long
#define mod 998244353
using namespace std;

string ax,ay,bx,by,x,y; 
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>ax>>ay>>bx>>by;
	if(ax!=bx)
	{
		cout<<"0000";
		return 0;
	}
	cout<<1;
	x=ay[0]+ay[1];
	y=by[0]+by[1];
	if(x!=y)
	{
		cout<<"000";
		return 0;
	}
	cout<<1;
	if((ay[2]<='C'&&by[2]<='C')||(ay[2]>='D'&&by[2]>='D')) cout<<1;
	else
	{
		cout<<"00";
		return 0;
	}
	if(abs(ay[2]-by[2])==1) cout<<1;
	else cout<<0;
	return 0;
}













