#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+5;
struct node{
	int s;char c;
}a[N],b[N];
int n,sum,ans,l,tot;
map<char,int>mp;
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i].s>>a[i].c,l+=a[i].s,mp[a[i].c]+=a[i].s;
	for(int i=1;i<=n;i++)
	{
		if(a[i].c==a[i-1].c) b[tot].s+=a[i].s;
		else b[++tot].c=a[i].c,b[tot].s=a[i].s;
}
	for(int i=1;i<=tot;i++) ans=max(ans,a[i].s);
	cout<<ans;
	return 0;
 } //²»»á 
 /*
 3
 2 a
 2 b
 1 c
 */
