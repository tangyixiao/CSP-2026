#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=4e5+10;
int n;
int num[N];char c[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i]>>c[i];
	}
	int l=1,r=n;
	int ans=0;
	while(l<r)
	{
		if(c[l]==c[r])
		{
			if(num[l]>num[r])num[l]-=num[r],r--;
			else if(num[l]<num[r])num[r]-=num[l],l++;
			else if(num[l]==num[r])l++,r--;
		}else
		{
			if(num[l]>num[r])ans+=num[r],num[l]-=num[r],r--;
			else if(num[l]<num[r])ans+=num[l],num[r]-=num[l],l++;
			else ans+=num[l],l++,r--;
		}
	
	}
	cout<<ans<<" ";
	return 0;
}
