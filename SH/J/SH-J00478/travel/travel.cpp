#include<bits/stdc++.h>//ÌìÏÂžé¹«
using namespace std;
string a1,b1;
int a,b;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio();
	cin.tie(0);
	cout.tie(0);
	cin>>a>>a1>>b>>b1;
	if(a!=b)cout<<"0000";
	else
	{
		cout<<1;
		if((a1[0]!=b1[0])||(a1[1]!=b1[1]))
		{
			cout<<"000";
		}
		else
		{
			cout<<1;
			if(!((a1[2]>='D'&&b1[2]>='D')||(a1[2]<'D'&&b1[2]<'D')))
			{
				cout<<"00";
			}
			else
			{
				cout<<1;
				if((a1[2]=='A'&&b1[2]=='C')||(a1[2]=='C'&&b1[2]=='A'))cout<<0;
				else cout<<1;
			}
		}
	}
	return 0;
}
