#include <bits/stdc++.h>
using namespace std;
long long size;
long long a[200005];
char b[200005]; 
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++)
	{
		cin >> a[i]>> b[i];
		size+=a[i];
	}
	long long mid = size/2;
	long long cnt = 0;
	long long l = 0,r=n+1;
	int i1 = 1;
	int i2 = n;
	while(l<mid)
	{
		int aa =0;
		if(l+a[i1]<=mid)
		{
			aa  =a[i1];
			l+=a[i1];
			long long cur = 0;
			while(cur+a[i2] <= aa)
			{
				cur+=a[i2];
				if(b[i1]!=b[i2])
				{
					cnt+=a[i2];
				}
				i2--;
			}
			if(cur < aa)
			{
				a[i2] -= (aa-cur);	
				if(b[i1]!=b[i2])
				{
					cnt+=(aa-cur);
				}
				cur=aa;
			} 
			i1++;				
		}
		else if(l < mid)
		{
			aa = mid-l;
			a[i1] -= aa;
			l=mid;
			long long cur = 0;
			while(cur+a[i2] <= aa)
			{
				cur+=a[i2];
				if(b[i1]!=b[i2])
				{
					cnt+=a[i2];
				}
				i2--;
			}
			if(cur < aa)
			{
				a[i2] -= (aa-cur);	
				if(b[i1]!=b[i2])
				{
					cnt+=(aa-cur);
				}
				cur=aa;
			} 
		}
	}
	cout << cnt;
	return 0;
}
