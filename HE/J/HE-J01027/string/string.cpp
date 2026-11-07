#include <bits/stdc++.h>
using namespace std;
int n;
long long a[200005];
long long ans;
char c[200005];
int main()
{
//	/*
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
//	*/
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		int ai;
		char ci;
		cin>>ai>>ci;
		if(ci==c[i-1])
			a[i-1]+=ai,i--,n--;
		else
			a[i]=ai,c[i]=ci;
	}
	int l=1,r=n;
	while(l<=r)
	{
		if(a[l]>a[r])
		{
			if(c[l]!=c[r])
				ans+=a[r];
			a[l]-=a[r];
			a[r]=0;
			r--;
		}else if(a[r]>a[l])
		{
			if(c[r]!=c[l])
				ans+=a[l];
			a[r]-=a[l];
			a[l]=0;
			l++;
		}else{
			if(c[l]!=c[r])
				ans+=a[l];
			a[l]=0;
			a[r]=0;
			l++,r--;
		}
	}
	cout<<ans;
	return 0;
}
