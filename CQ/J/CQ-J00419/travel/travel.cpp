#include <bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int x,y;
	string a,b;
	cin>>x>>a>>y>>b;
	string ans="";
	if(x==y)
	{
		ans+="1";
		if(a[0]+a[1]==b[0]+b[1])
		{
			ans+="1";
			if(!(a[2]=='C' && b[2]=='D' || a[2]=='D' && b[2]=='C'))
			{
				ans+="1";
				if(a[2]+1==b[2] || b[2]+1==a[2] || a[2]=='D' && b[2]=='F' || a[2]=='F' && b[2]=='D') ans+="1";
				else ans+="0";
			}
			else ans+="00";
		}
		else ans+="000";
	}
	else ans+="0000";
	cout<<ans;
	return 0;
}

