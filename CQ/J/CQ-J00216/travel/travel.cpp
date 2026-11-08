#include<bits/stdc++.h>//注意开不开long long
#define int long long
using namespace std;

signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	string a,b,c,d;
	cin>>a>>b>>c>>d;
	if(a==c) 
	{
		cout<<"1";
		if(b[0]==d[0]&&b[1]==d[1]) 
		{
			cout<<"1";
			if(b[2]>='A'&&b[2]<='C')
			{
				if(d[2]>='A'&&d[2]<='C') 
				{
					cout<<"1";	
					if(abs(d[2]-b[2])==1) cout<<"1";
					else cout<<"0";
				}
				else cout<<"00";
			}
			else
			{
				if(d[2]>'C') 
				{
					cout<<"1";
					if(abs(d[2]-b[2])==1) cout<<"1";
					else cout<<"0";
				}
				else cout<<"00";
			}
		}
		else cout<<"000";
	}
	else cout<<"0000";
	 
	return 0;
}

