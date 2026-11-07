#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e5+5;
int n,st_,en_,cnt,ans,L[N];
char st,en,ch[N];
string s,t;
bool st__,en__;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>L[i]>>ch[i];
		cnt+=L[i];
		for(int j=1;j<=L[i];j++)
		{
			t+=ch[i];
		}
	}
//	for(int i=1;i<=n;i++)
//	{
//		if(st__==0)st_=L[i],st=ch[i];
//		if(en__==0)en_=L[n-i+1],en=ch[i];
//		if(ch[i]==ch[n-i+1])
//		{
//			if(L[i]<L[n-i+1])en_-=st_,en__=1,st=ch[i];
//			else if(L[i]>L[n-i+1])st_-=en_,st__=1,en=ch[n-i+1];
//		}
//	}
//	cout<<cnt;
//	exit(0);
	int len=t.size();
	for(int i=0;i<=len/2;i++)
	{
		if(t[i]!=t[len-i-1])ans++;
	}
	cout<<ans;
	return 0;
}