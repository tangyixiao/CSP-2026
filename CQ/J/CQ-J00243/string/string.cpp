#include<bits/stdc++.h>
using namespace std;
int n,a[200005];
char b[200005];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	int l=1,r=n;
	long long sum=0;
	while(l<r)
	{
		if(a[l]<a[r])
		{
			if(b[l]!=b[r])
			{
				sum+=a[l];
			}
			a[r]-=a[l];
			l++;
		}
		else if(a[l]>a[r])
		{
			if(b[l]!=b[r])
			{
				sum+=a[r];
			}
			a[l]-=a[r];
			r--;
		}
		else
		{
			if(b[l]!=b[r])
			{
				sum+=a[r];
			}
			l++;
			r--;
		}
	}
	cout<<sum;
	return 0;
} 
