#include <bits/stdc++.h>
using namespace std;
int a[2000010];
char b[2000010];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	long long cnt=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
	}
	int l=1,r=n;
	while(true)
	{
		if(b[l]==b[r])
		{
			if(a[l]<a[r])
			{
				a[r]-=a[l];
				a[l]=0;
				l++;
			}
			else if(a[l]>a[r])
			{
				a[l]-=a[r];
				a[r]=0;
				r--;
			}
			else
			{
				a[l]=0;
				a[r]=0;
				l++;
				r--;
			}
		}
		else
		{
			if(a[l]<a[r])
			{
				cnt+=a[l];
				a[r]-=a[l];
				a[l]=0;
				l++;
			}
			else if(a[l]>a[r])
			{
				cnt+=a[r];
				a[l]-=a[r];
				a[r]=0;
				r--;
			}
			else
			{
				cnt+=a[l];
				a[l]=0;
				a[r]=0;
				l++;
				r--;
			}
		}
		if(l>n&&r<1)
		{
			break;
		}
	}
	cout<<cnt<<endl;
}
