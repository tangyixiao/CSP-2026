#include<bits/stdc++.h>
#define LL long long
#define IC ios::sync_with_stdio(false);cin.tie(0);
using namespace std;
string c,s,cc,ss;
bool solve(char x)
{
	if(x=='A'||x=='B'||x=='C') return 0;
	return 1;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	IC
	cin>>c>>s>>cc>>ss;
	if(c==cc)
	{
		cout<<1;
		if(s[0]==ss[0]&&s[1]==ss[1])
		{
			cout<<1;
			if(solve(s[2])==solve(ss[2]))
			{
				cout<<1;
				if(abs(s[2]-ss[2])==1) cout<<1;
				else cout<<0;
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}