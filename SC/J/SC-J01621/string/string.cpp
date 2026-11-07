#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int num[N];
int id[N];
char c[N];
signed main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i]>>c[i];
		id[i]=id[i-1]+num[i];
	}
	for(int i=n;i>=1;i--)
		id[i]=id[i-1];
	int r=n;
	int ans=0;
	int sum=0;
	int en=id[n]+num[n];
	int las=id[n]+num[n];
	for(int i=1;i<=n;i++)
	{
//		cout<<sum<<" "<<num[i]<<" "<<r<<" "<<en/2<<"\n";
		if(sum+num[i]>en/2)
			sum=en/2;
		else
			sum+=num[i];
		while(en-id[r]<=sum)
		{
//			cout<<sum<<" "<<i<<" "<<r<<" "<<en-id[r]+1<<" "<<en-id[r-1]+1<<"\n";
			if(c[r]!=c[i])
				ans+=las-id[r];
			las=id[r];
			r--;
		}
//		cout<<sum<<" "<<en<<" "<<las<<"\n";
		int siz=sum-(en-las);
		if(c[r]!=c[i])
			ans+=siz;
		las-=siz; 
//		cout<<ans<<"\n";
		if(sum==en/2)
			break;
	}
	cout<<ans;
	return 0;
} 