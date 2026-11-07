#include <bits/stdc++.h>
#define int long long
using namespace std;

signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false); cin.tie(0); cout.tie(0);
	string a,b,c,d; cin>>a>>b>>c>>d;
	if(a!=c)
	{
		cout<<"0000";
		return 0;
	}
	if(b[0]!=d[0]||b[1]!=d[1])
	{
		cout<<"1000";
		return 0;
	}
	int opb=b[2]=='A'||b[2]=='B'||b[2]=='C';
	int opd=d[2]=='A'||d[2]=='B'||d[2]=='C';
	if(opb!=opd)
	{
		cout<<"1100";
		return 0;
	}
	if(b[2]>d[2]) swap(b[2],d[2]);
	if(b[2]=='A'&&d[2]=='B'||b[2]=='B'&&d[2]=='C'||b[2]=='D'&&d[2]=='F')
		cout<<"1111";
	else cout<<"1110";
	return 0;
}
