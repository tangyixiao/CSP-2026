#include<bits/stdc++.h>
using namespace std;
long long n,m,arr[500005],sum,ans,ans2,ans3,ans4;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	cin>>arr[1];
	ans=max(ans,arr[1]);
	ans2=arr[1];
	for(int i=2;i<=n;i++)
	{
		cin>>arr[i];
		ans=max(ans,arr[i]);
		ans2=(ans2&arr[i]);
	}

	if(m==1)
	{
		cout<<ans;
	}
	else if(m==n)
	{
		cout<<ans2;
	}
	else if(m==2)
	{
		for(int i=1;i<=n;i++)
		{
			for(int j=1;j<=n;j++)
			{
				if(i==j) continue;
				ans3=max(ans3,(arr[i]&arr[j]));
			}
		}
		cout<<ans3;
	}
	return 0;
}