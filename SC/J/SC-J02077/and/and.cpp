#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,a[N],mul_2[N],tot[32],m,key=114514,sum,ans;
bool is_2[N][32],is_in[N];
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	mul_2[0]=1;
	for(int i=1;i<=30;i++)mul_2[i]=mul_2[i-1]*2;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		int t=a[i];
		is_in[i]=1;
		for(int j=30;j>=0;j--)
		{
			if(t>=mul_2[j])is_2[i][j]=1,tot[j]++,t-=mul_2[j];
		}
	}
	for(int i=30;i>=0;i--)
	{
		if(tot[i]>=m)
		{
			key=i;
			break;
		}
	}
	if(key==114514)
	{
		cout<<0;
		return 0;
	}
	ans+=mul_2[key];
	for(int i=1;i<=n;i++)
	{
		if(is_2[i][key]==0)is_in[i]=0;
	}
	for(int i=key-1;i>=0;i--)
	{
		sum=0;
		for(int j=1;j<=n;j++)
		{
			if(is_in[j]&&is_2[j][i]==1)sum++;
		}
		if(sum>=m)
		{
			for(int j=1;j<=n;j++)
			{
				if(is_2[j][i]==0)is_in[j]=0;
			}
			ans+=mul_2[i];
		}
	}
	cout<<ans;
	return 0;
}