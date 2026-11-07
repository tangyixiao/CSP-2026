#include<bits/stdc++.h>
using namespace std;
long long summ=0;
int l=1,r;
int n;
long long a[200005];
char c[200005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
	}
	r=n;
	while(l<r)
	{
		for (int i=r;i>=1;i--)
		{
			if (a[i]<a[l])
			{
				if (c[l]!=c[i])
				{
					summ+=a[i];
				}
				a[l]-=a[i];
				a[i]=0; 
			}
			else if (a[i]>a[l])
			{
				if (c[l]!=c[i])
				{
					summ+=a[l];
				}
				a[i]-=a[l];
				a[l]=0;
				l++;
				break;
			}
			else
			{
				if (c[l]!=c[i])
				{
					summ+=a[i];
				}
				a[l]=0;
				a[i]=0; 
				l++;
				r--;
				break;
			}
		}
	}
	cout<<summ;
	return 0;
} 
