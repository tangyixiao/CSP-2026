#include <bits/stdc++.h>
using namespace std;

long long n,ans;
long long a,cnt;
char c;
char bfbig[10000009];
long long ad=0;
long long mid;
int mid1;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for (long long i=0;i<n;i++)
	{
		cin>>a>>c;
		for (int i=ad;i<=a+ad;i++)
		{
			bfbig[i]=c;
		}
		ad=a+ad;
	}
	mid=ad/2;
	mid1=ad%2;
	if (mid1==0)
	{
		for (long long i=0;i<mid;i++)
		{
			if(bfbig[mid-i-1]!=bfbig[mid+i])
			{
				ans++;
			}
		}
	}
	else
	{
		for (long long i=1;i<=mid;i++)
		{
			if(bfbig[mid-i]!=bfbig[mid+i])
			{
				ans++;
			}
		}
	}
	cout<<ans;
	return 0;
}
