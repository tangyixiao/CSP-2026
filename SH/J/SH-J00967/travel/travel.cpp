#include<bits/stdc++.h> 
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string a,b,c,d;                                                                         
	cin>>a>>b>>c>>d;
	bool check=true;
	if(a==c)
	{
		cout<<1;
		for(int i=0;i<=1;++i)
		{
			if(b[i]!=d[i])
			{
				check=false; 
			}
		}
		if(!check)
		{
			cout<<0;
		}
		else
		{
			cout<<1;
		}
		int n=b.size();
		int m=d.size();
		if(b[n-1]=='A'||b[n-1]=='B'||b[n-1]=='C')
		{
			if(!check) cout<<0;
			else if(d[m-1]=='A'||d[m-1]=='B'||d[m-1]=='C')
			{
				cout<<1;
			}
			else
			{
				cout<<0;
			}
		}
		else
		{
			if(!check) cout<<0;
			else if(d[m-1]=='D'||d[m-1]=='F')
			{
				cout<<1;
			}
			else
			{
				cout<<0;
			}
		}
		if(!check)
		{
			cout<<0;
		}
		else
		{
			if(d[m-1]=='D'||d[m-1]=='F')
			{
				if(b[n-1]=='D'||b[n-1]=='F')
				{
					cout<<1;
				}
				else cout<<0;
			}
			else
			{
				if(d[m-1]=='A')
				{
					if(b[n-1]=='B') cout<<1;
					else cout<<0;
				}
				if(d[m-1]=='B')
				{
					if(b[n-1]=='A'||b[n-1]=='B') cout<<1;
					else cout<<0;
				}
				if(d[m-1]=='C')
				{
					if(b[n-1]=='B') cout<<1;
					else cout<<0;
				}
			}
		}
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	return 0;
}
