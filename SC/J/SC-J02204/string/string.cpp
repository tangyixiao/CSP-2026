#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin>>n;
	int a[n+5];
	char c[n+5];
	for(int i=1;i<=n;i++)
		cin>>a[i]>>c[i];
	long long sum=0;
	int r=n,l=1;
	while(r>=l)
	{
		if(a[r]<a[l])
		{
			a[l]-=a[r];
			if(c[r]!=c[l])
				sum+=a[r];
			r--;
		}
		else if(a[r]=a[l])
		{
			r--;
			l++;
			if(c[r]!=c[l])
				sum+=a[r];
		}
		else if(a[r]>a[l])
		{
			a[r]-=a[l];
			if(c[r]!=c[l])
				sum+=a[l];
			l++;
		}
	}
	cout<<sum;
	return 0; 
}