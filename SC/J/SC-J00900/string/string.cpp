#include <bits/stdc++.h>

using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	char s[500000];
	long long ans=0;
	long long n,k=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int a;
		char b;
		scanf("%d%c",&a,&b);
		for(long long j=k;j<a+k;j++)
		{
			s[j]=b;
		}
		k=k+a;
	}
	if(k%2 != 0)
	{
		long long mid=k/2;
		for(long long i=mid-1,j=mid+1;i>=0 && j<k;i--,j++)
		{
			if(s[i]!=s[j])
			{
				ans++;
			}
		}
	}
	else
	{
		for(long long i=k/2-1,j=k/2;i>=0 && j<k;i--,j++)
		{
			if(s[i]!=s[j])
			{
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}