#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int x,y,z;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		cout<<1;
		for(int i=0;i<b.size()-1;i++)
		{
			if(b[i]!=d[i]) 
			{
				x=1;	
			}
		}
		if(x==0) cout<<1;
		else 
		{
			cout<<"000";
			return 0;
		}
		if((b[b.size()-1]=='D'&&d[d.size()-1]=='E')||(b[b.size()-1]=='E'&&d[d.size()-1]=='D')||(b[b.size()-1]!='D'&&d[d.size()-1]!='E'&&b[b.size()-1]!='E'&&d[d.size()-1]!='D')) cout<<1;
		else 
		{
			y=1;
			cout<<0;
		}
		if(abs(b[b.size()-1]-d[d.size()-1])==1&&y==0) cout<<1;
		else cout<<0;
	}
	else cout<<"0000";
	return 0;
}
