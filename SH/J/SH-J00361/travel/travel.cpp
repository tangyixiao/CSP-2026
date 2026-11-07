#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a,b,c,d,e,aa,bb,cc,dd,ee;
	cin>>a>>b>>c>>d>>e>>aa>>bb>>cc>>dd>>ee;
	if(a==aa&&b==bb)
	{
		cout<<'1';
		if(c==cc&&d==dd)
		{
			cout<<'1';
			if(e=='A'||e=='B'||e=='C')
			{
				if(ee=='A'||ee=='B'||ee=='C')
				{
					cout<<'1';
					if(abs(e-ee)==1) cout<<'1';
					else cout<<'0';
				}
				else
				{
					cout<<"00";
					return 0;
				}
			}
			else if(e=='D'||e=='F')
			{
				if(ee=='D'||ee=='F')
				{
					cout<<"11";
					return 0;
				}
				else
				{
					cout<<"00";
					return 0;
				}
			}
		}
		else
		{
			cout<<"000";
			return 0;
		}
	}
	else
	{
		cout<<"0000";
		return 0;
	}
	return 0;
}
