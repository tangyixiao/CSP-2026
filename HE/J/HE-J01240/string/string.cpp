#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int ans,a[N],n;
char c[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)cin>>a[i]>>c[i];
	int l=1,r=n;
	while(l<r)
	{
		int mi=min(a[l],a[r]);
		if(c[l]!=c[r])ans+=mi;
		a[l]-=mi,a[r]-=mi;
		if(a[l]==0)l++;
		if(a[r]==0)r--;
	}
	cout<<ans;
} //这是用来凑444字符的
