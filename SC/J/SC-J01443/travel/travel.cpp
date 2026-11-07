#include <bits/stdc++.h>
using namespace std;

signed main()
{
	freopen("travel.in","r",stdin);freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	string s1,c1,s2,c2;cin>>s1>>c1>>s2>>c2;
	if(s1!=s2)
	{
		cout<<"0000";
		exit(0);
	}
	cout<<"1";
	if(c1[0]==c2[0]&&c1[1]==c2[1]) cout<<"1";
	else
	{
		cout<<"000";
		exit(0);
	}
	int x=c1[2]-'A',y=c2[2]-'A';
	if((x<=2&&y<=2)||(x>2&&y>2)) cout<<"1";
	else
	{
		cout<<"00";
		exit(0);
	}
	if(x>2&&abs(x-y)==2) cout<<"1";
	else if(x<=2&&abs(x-y)==1) cout<<"1";
	else cout<<"0";
	return 0;
}