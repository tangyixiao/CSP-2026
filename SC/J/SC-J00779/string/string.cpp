#include<bits/stdc++.h>
using namespace std;
const int maxn=200010;
char c[maxn];
int n,a[maxn],k;
long long ans=0;
int l=1,r=n;
void del()
{
	k=min(a[l],a[r]);
	if(c[l]!=c[r]) ans+=k;
	a[l]-=k; a[r]-=k;
	if(a[l]==0) l++;
	if(a[r]==0) r--;
}
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>a[i]>>c[i];
	l=1,r=n;
	while(l<r) del();
	cout<<ans;
	return 0;
}