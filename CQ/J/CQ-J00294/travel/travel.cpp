#include<bits/stdc++.h>
using namespace std;

string xa,xb,ra,rb;
int vis[5]={1,1,1,2,2};

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>xa>>xb>>ra>>rb;
	if(xa==ra)
	{
		cout<<1;
		if(xb[0]+xb[1]==rb[0]+rb[1])
		{
			cout<<1;
			if(vis[xb[2]-'A']==vis[rb[2]-'A'])
			{
				cout<<1;
				if(abs(xb[2]-rb[2])==1) cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	
	return 0;
}
