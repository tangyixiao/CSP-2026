#include<bits/stdc++.h>
using namespace std;
long long n,a[1000001],ans;
char b[1000001];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		int z;
		char x;
		cin>>z>>x;
		 a[i]=z;
		 b[i]=x;
	}
	int l=0,r=n-1;
	while(l<=r)
	{
		if(b[l]!=b[r])
		{
			ans+=min(a[l],a[r]);
			if(a[l]>a[r]) 
			{
			a[l]-=a[r];
			a[r]=0;
			r--;
		    }
		    else 
		    {
			a[r]-=a[l];
			
		    a[l]=0;
		    l++;
		}
	   }
		else 
		{
		int n=min(a[l],a[r]);
		a[l]-=n;
		a[r]-=n;
		l++;
		r--;
	}
	}
	cout<<ans;
}
