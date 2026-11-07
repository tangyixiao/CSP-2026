#include<bits/stdc++.h>
using namespace std;
string a,b,x,y;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>x>>y;
	if(a==x)
	{
		cout<<1;
		bool t=true;
		for(int i=0;i<2;i++)
			if(b[i]!=y[i])
			{
				t=false;
				break;
			} 
		if(t)
		{
			cout<<"1";
			if((b[2]<='C'&&y[2]<='C')||b[2]>='D'&&y[2]>='D') 
			{
				cout<<"1";
				if(b[2]+1==y[2]||b[2]-1==y[2]) cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	if(a!=x)
	{
		cout<<"0000";
	}
	return 0;
}//Trick||Treat!
