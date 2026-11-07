// AKed !!!!!!!!!!!!!!!!!!!! AKed AKed AKed AKed AKed AKed AKed AKed
#include<bits/stdc++.h>
using namespace std;
#define int long long
#define fastio ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);

const int inf=0x3f3f3f3f3f3f3f3f;
const int N=2e5+5;
struct input{int a;char c;}a[N];
int n,tot,mid,p[N*2],np,t[N],ans;
map<int,char> ml,mr;
char cl[N*2],cr[N*2];

signed main()
{
	fastio;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].a>>a[i].c,tot+=a[i].a;
	mid=tot/2;
	int nowl=0,nowr=0;
	for(int i=1;i<=n;i++)
	{
		nowl=nowr+1;nowr=nowl+a[i].a-1;
		if(tot%2)
		{
			if(nowl<=mid+1) p[++np]=nowl;
			if(nowr>=mid+1) p[++np]=tot-nowr+1;
		}
		else
		{
			if(nowl<=mid) p[++np]=nowl;
			if(nowr>mid) p[++np]=tot-nowr+1;
		}
		t[i]=nowl;
	}
	if(tot%2) p[++np]=tot/2+2;
	else p[++np]=tot/2+1;
	sort(p+1,p+np+1);
	np=unique(p+1,p+np+1)-p-1;
//	for(int i=1;i<=np;i++) cout<<p[i]<<' ';cout<<'\n';
	for(int i=1;i<np;i++)
	{
		int ix=upper_bound(t+1,t+n+1,p[i])-t-1;cl[i]=a[ix].c;
		ix=upper_bound(t+1,t+n+1,tot-p[i]+1)-t-1;cr[i]=a[ix].c;
	}
//	for(int i=1;i<np;i++) cout<<cl[i]<<' '<<cr[i]<<'\n';
	for(int i=1;i<np;i++)
		if(cl[i]!=cr[i]) ans+=p[i+1]-p[i];
	return cout<<ans<<'\n',0;
}
/*
3
2 a
2 b
1 c

2
2 a
3 a

6
1000000000 a
1000000000 a
1000000000 a
1000000000 b
1000000000 b
1000000000 b
*/
