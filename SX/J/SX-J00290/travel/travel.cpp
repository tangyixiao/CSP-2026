#include<bits/stdc++.h>
#define ll long long
#define ull unsigned long long
#define pll pair<ll,ll>
#define fi first
#define se second
using namespace std;
string a,b,c,d;
bool check(char x,char y)
{
	ll f1=0,f2=0;
	if(x=='A'||x=='B'||x=='C') f1=1;
	else if(x=='D'||x=='E') f1=2;
	if(y=='A'||y=='B'||y=='C') f2=1;
	else if(y=='D'||y=='E') f2=2;
	return f1==f2;
}
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>a>>b>>c>>d;
	if(a==c)
	{
		cout<<"1";
		if(b[0]==d[0]&&b[1]==d[1])
		{
			cout<<"1";
			if(check(b[2],d[2]))
			{
				cout<<"1";
				ll x=b[2]-65,y=d[2]-65;
				if(abs(x-y)==1) cout<<"1";
				else cout<<"0";
			}
			else cout<<"00";
		}
		else cout<<"000";
	}
	else cout<<"0000";
	return 0;
}
