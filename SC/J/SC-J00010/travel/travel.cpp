#include<bits/stdc++.h>
using namespace std;
string c,s,cc,ss;
char x,y;
int a,b;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>c>>s>>cc>>ss;
	a=(s[0]-'0')*10+(s[1]-'0');
	x=s[2];
	b=(ss[0]-'0')*10+(ss[1]-'0');
	y=ss[2];
	if(c==cc)
	{
		if(a==b)
		{
			if((x<='C'&&y<='C'))
			{
				if(abs(x-y)==1)
				{
					cout<<"1111";
				}
				else cout<<"1110";
			}
			else if(x>='D'&&y>='D')
			{
				cout<<"1111";
			}
			else cout<<"1100";
		}
		else cout<<"1000";
	}
	else cout<<"0000";
	return 0;
}