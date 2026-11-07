#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c, s;
	string cc, ss;
	cin>>c>>cc>>s>>ss;
	if(cc[2]=='D')cc[2]='E';
	if(ss[2]=='D')ss[2]='E';
	if(c==s)
	{
		cout<<1;
		if(cc[0]==ss[0] && cc[1]==ss[1])
		{
			cout<<1;
			if((cc[2]<'D'&&ss[2]<'D') || (cc[2]>'D'&&ss[2]>'D'))
			{
				cout<<1;
				if(abs(cc[2]-ss[2])==1)cout<<1;
				else cout<<0;
			}else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
} 
