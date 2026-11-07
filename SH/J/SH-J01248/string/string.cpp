#include <bits/stdc++.h>
using namespace std;
long long a[10000001],l,r,cnt;
char a1[10000001];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>a1[i];
	}
	l=1;
	r=n;
	while(l<r)
	{
		if(a1[l]!=a1[r]&&a[l]>a[r])
		{
			cnt+=a[r];
			a[l]=a[l]-a[r];
			r--;
		}
		else if(a1[l]!=a1[r]&&a[l]<a[r])
		{
			cnt+=a[l];
			a[r]=a[r]-a[l];
			l++;
		}
		else if(a1[l]==a1[r]&&a[l]<a[r])
		{
			a[r]=a[r]-a[l];
			l++;
		}
		else if(a1[l]==a1[r]&&a[l]>a[r])
		{
			a[l]=a[l]-a[r];
			r++;
		}
		else if(a1[l]!=a1[r]&&a[l]==a[r])
		{
			cnt+=a[r];
			r--;
			l++;
		}
		else if(a1[l]==a1[r]&&a[l]==a[r])
		{
			l++;
			r--;
		}
	}
	cout<<cnt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
