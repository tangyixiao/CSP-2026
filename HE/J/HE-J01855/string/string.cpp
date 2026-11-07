#include<bits/stdc++.h>
using namespace std;
long long a[200010];
char c[200010];
int n;
long long ans=0;
long long r,l=1;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	
	long long L=0;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i]>>c[i];
		L+=a[i];
		if(i>=2&&c[i]==c[i-1])
		{
			a[i-1]+=a[i];//合并同类项 
			i--;n--;
		}
	}
	if(n==1)
	{
		cout<<0;
		return 0;
	}
	l=1;
	r=n;
	long long temp=0;
	while(l<=r)
	{
		if(c[l]!=c[r])
		{
			if(a[l]>a[r])
			{
				ans+=a[r];
				a[l]-=a[r];
				l--;
			}
			else if(a[l]<a[r])
			{
				ans+=a[l];
				a[r]-=a[l];
				r++;
			}
			else
			{
				ans+=a[l];
			}
		}	
		l++;r--;	
	}
	

	
	cout<<ans;
	
	return 0;
}
