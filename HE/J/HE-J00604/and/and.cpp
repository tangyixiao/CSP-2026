#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans=-1;
int digui(int x,int w,int c)
{ 
	if(c==m)
	{
		return x;
	}
	int max1=-1; 
	for(int i=w+1;i<=n;i++)
	{
		if(n-w>m-c)
		{
			max1=max(digui(x&a[i],w+1,c+1),digui(x,w+1,c));	
		}
	}
	return max1;
}
int main()
{
	freopen("and.in","r",stdin);
	freoprn("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=n-m;i++)
	{
		ans=max(ans,digui(a[i],i,1));
	}
	cout<<ans;
	return 0;
} 
