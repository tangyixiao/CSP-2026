#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll cnt[1000010];
char c[1000010];
ll n,len,l,r,sum,ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>cnt[i]>>c[i];
		len+=cnt[i];
	}
	r=n,l=1;
	while(l<r)
	{
		if(cnt[l]==cnt[r])
		{
			if(c[l]!=c[r])ans+=cnt[r];
			l++,r--;
		}
		else if(cnt[l]>cnt[r])
		{
			cnt[l]-=cnt[r];
			if(c[l]!=c[r])ans+=cnt[r];
			r--;
		}
		else
		{
			cnt[r]-=cnt[l];
			if(c[l]!=c[r])ans+=cnt[l];
			l++;
		}
	}
	cout<<ans;
	return 0;
}
