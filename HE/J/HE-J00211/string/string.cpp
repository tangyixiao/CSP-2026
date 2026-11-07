#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=3e5+50;
int n,ans,sum[N],res;
char c[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>sum[i]>>c[i];
		res+=sum[i];
    }
    res/=2;
    int l=1,r=n,mid=0;
    while(mid<res)
    {
    	if(sum[l]<sum[r])
    	{
    		if(c[l]==c[r]) 
    		{
    			sum[r]-=sum[l];
    			mid+=sum[l];
    			sum[l]=0;
    			l++;
			}else
			{
				ans+=sum[l];
				sum[r]-=sum[l];
				mid+=sum[l];
				sum[l]=0;
				l++;
			}
		}else if(sum[l]>sum[r])
		{
			if(c[l]==c[r]) 
    		{
    			sum[l]-=sum[r];
    			mid+=sum[r];
    			sum[r]=0;
    			r--;
			}else
			{
				ans+=sum[r];
				sum[l]-=sum[r];
				mid+=sum[r];
				sum[r]=0;
				r--;
			}
		}else if(sum[l]==sum[r])
		{
			if(c[l]==c[r])
			{
				mid+=sum[l];
				sum[r]=sum[l]=0;
				l++;
				r--;
			}
			else 
			{
				ans+=sum[l];
				mid+=sum[l];
				sum[l]=sum[r]=0;
				l++;
				r--;
			}
		} 
	}
	cout<<ans;
	return 0;
}
