#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+10;
char c[N];
ll a[N];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie();
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	ll L=0,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i],L+=a[i];
	ll mid=0,res=0;
	mid=(L+1)/2;
	int i;
		for(i=1;res<mid;res+=a[i],i++);
	i--;
	int l=1,r=n;
	while(l<i&&i<r)
	{
		if(c[l]==c[r])
		{
			if(a[l]<a[r]) 
			{
				a[r]-=a[l];
				l++;
			}
			else if(a[r]<a[l])
			{
				a[l]-=a[r];
				r--;
			}
			else l++,r--;
		}
		else
		{
			if(a[l]<a[r]) 
			{
				ans+=a[l];
				a[r]-=a[l];
				l++;
			}
			else if(a[r]<a[l])
			{
				ans+=a[r];
				a[l]-=a[r];
				r--;
			}
			else ans+=a[l],l++,r--;
		}
	}
	if(c[l]==c[r]);
	else
	{
		ans+=min(a[l],a[r]);
	}
	cout<<ans;
	return 0;
}