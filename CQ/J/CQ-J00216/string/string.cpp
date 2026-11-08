#include<bits/stdc++.h>//注意开不开long long
#define int long long
using namespace std;
const int N=2e5+5;
int n,cnt[N];
char c[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++) cin>>cnt[i]>>c[i];
	int ans=0;
	for(int l=1,r=n;l<r;)
	{
		if(c[l]==c[r])
		{
			if(cnt[l]<cnt[r]) cnt[r]-=cnt[l],l++;
			else if(cnt[r]==cnt[l]) l++,r--;
			else cnt[l]-=cnt[r],r--;	
		}	
		else 
		{
			if(cnt[l]<cnt[r]) ans+=cnt[l],cnt[r]-=cnt[l],l++;
			else if(cnt[r]==cnt[l]) ans+=cnt[l],l++,r--;
			else ans+=cnt[r],cnt[l]-=cnt[r],r--;
		}
	} 
	cout<<ans; 
	return 0;
}

