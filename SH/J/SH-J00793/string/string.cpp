#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	int a[200005];
	char c[200005];
	cin >> n;
	long long int sum=0;
	long long int ans=0;
	for(int i=1;i<=n;i++)
	{
		cin >> a[i] >> c[i];
		sum+=a[i];
	}
	int j=n;
	int i=1;
	while(i!=j)
	{
		if(a[j]==0)
		{
			j--;
			continue;
		}
		if(a[i]==0)
		{
			i++;
			continue;
		}
		if(a[i]>=a[j])
		{
			if(c[i]!=c[j])
			{
				ans+=a[j];
				a[i]-=a[j];
				a[j]=0;
			}
			else
			{
				a[i]-=a[j];
				a[j]=0;
			}
		}
		else if(a[i]<a[j])
		{
			if(c[i]!=c[j])
			{
				ans+=a[i];
				a[j]-=a[i];
				a[i]=0;
			}
			else
			{
				a[j]-=a[i];
				a[i]=0;
			}
		}
	}
	cout << ans;
	return 0;
}
