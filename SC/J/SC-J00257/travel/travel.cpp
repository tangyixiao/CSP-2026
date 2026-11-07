#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	if(c1==c3)
	{
		cout<<1;
		char a=c2[0],b=c2[1],c=c4[0],d=c4[1];
		if(a==c&& b==d)
		{
			cout<<1;
			bool df,fd;
			if(c2[2]=='A' || c2[2]=='B' || c2[2]=='C')
			{
				df=1; 
			}
			else df=0;
			if(c4[2]=='A' || c4[2]=='B' || c4[2]=='C')
			{
				fd=1; 
			}
			else fd=0;
			
			if(df&& fd)
			{
				cout<<1;
				if(c4[2]-1==c2[2] || c2[2]-1==c4[2])
				cout<<1;
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else
	{
		cout<<"0000";
	}
	return 0;
}