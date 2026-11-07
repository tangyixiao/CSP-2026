#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a,b;
	string s,ss;
	bool aa=0,bb=0,cc=0,dd=0;
	cin>>a>>s>>b>>ss;
	if(a==b)
	{
		aa=1;
		if(s[0]==ss[0],s[1]==ss[1])
		{
			bb=1;
			if(s[2]>='A'&&s[2]<='C'&&ss[2]>='A'&&ss[2]<='C')
			{
				cc=1;
				if(s[2]+1==ss[2]||s[2]-1==ss[2])
				{
					dd=1;
				}
			}
			else if(s[2]>='D'&&s[2]<='F'&&ss[2]>='D'&&ss[2]<='F')
			{
				cc=1;
				dd=1;
			}
		}
	}
	if(aa) cout<<1;
	else cout<<0;
	if(bb) cout<<1;
	else cout<<0;
	if(cc) cout<<1;
	else cout<<0;
	if(dd) cout<<1;
	else cout<<0;
	return 0;
}
