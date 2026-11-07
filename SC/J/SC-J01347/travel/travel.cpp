#include <bits/stdc++.h>
#define int long long
using namespace std;
string a,b,c,d;
signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0); 
	cin>>a>>b>>c>>d;
	if(a!=c)
	{
		cout<<"0000";
		return 0;
	}
	cout<<"1";
	if(b[1]==d[1]&&b[0]==d[0])
	{
		cout<<"1";
		int bb=b[2]-'A'+1;
		int dd=d[2]-'A'+1;
		if((bb<=3&&dd<=3)||(bb>3&&dd>3))
		{
			cout<<"1";
			if(abs(bb-dd)<=1) cout<<"1";
			else cout<<"0";
		 } 
		else cout<<"00";
		
	 } 
	else cout<<"000";
	
	return 0;
 }