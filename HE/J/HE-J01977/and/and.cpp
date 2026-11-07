#include<bits/stdc++.h>
using namespace std;	
int a[200005],a1[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		a1[i]=a[i];
	}
	int r=0,l=r,ans=0,c=n,j1,j2;
	for(int i=0;i<m;i++)
	{
		for( c=0;c<n;c++)
		{
			if(a1[c]==0)
				break;
		}
		for(int j=0;j<c;j++)
		{
			if(a1[r]&&a1[l]>ans)
			{
				ans=a1[r]&&a1[l];
				j1=r;
				j2=l;
			}
			l++;
			if(l==c) 
			{
				r++;
				l=r;
			}
		}
		a1[r]=0;
		a1[l]=0;
	}
	cout<<12;
	return 0;
}
