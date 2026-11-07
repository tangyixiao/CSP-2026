#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll a,c;
string b,d;
char p,q;
ll e,f;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>a>>b>>c>>d;
	if(a!=c)
	{
		cout<<"0000";
		return 0;
	}
	else cout<<1;
	for(ll i=0;i<(ll)b.size();i++)
	{
		if(b[i]>='0'&&b[i]<='9') e=e*10+(b[i]-'0');
		else p=b[i];
	}
	for(ll i=0;i<(ll)d.size();i++)
	{
		if(d[i]>='0'&&d[i]<='9') f=f*10+(d[i]-'0');
		else q=d[i];
	}
	if(e!=f) cout<<"000";
	else
	{
		cout<<1;
		if(p>q) swap(p,q);
		if(p<='C'&&q>'C') cout<<"00";
		else
		{
			cout<<1;
			if((p=='A'&&q=='B')||(p=='B'&&q=='C')||(p=='D'&&q=='F')) cout<<1;
			else cout<<0;
		}
	}
	return 0;
}
