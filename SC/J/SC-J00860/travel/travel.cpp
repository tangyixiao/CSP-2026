#include<bits/stdc++.h>
#define i128 __int128
#define ll long long
#define Pii pair<int,int>
#define fi first
#define se second

using namespace std;
const int N=1e5+10;

int p[4]; string n,m,s,t;

signed main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin.tie(0)->sync_with_stdio(0);
	cin>>n>>s>>m>>t;
	p[0]=(n==m); p[1]=(s[0]==t[0]&&s[1]==t[1]);
	p[2]=((s[2]>='D'&&t[2]>='D')||(s[2]<'D'&&t[2]<'D'));
	p[3]=((s[2]>='D'&&t[2]>='D')||(abs(s[2]-t[2])==1));
	for(int i=1;i<=3;++i) p[i]&=p[i-1];
	for(int i=0;i<=3;++i) cout<<p[i];
	return 0;
}