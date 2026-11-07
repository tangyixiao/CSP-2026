#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	int k;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int b[n];
	for(int j=n;j>0;j--)
	{
		int maxn=-1000;
		for(int i=0;i<j;i++)
		{
			if(a[i]>maxn)
			{
				maxn=a[i];
				k=i;
			}
		}
		b[n-j]=maxn;
		for(int i=k;i<j-1;i++)
		{
			a[i]=a[i+1];
		}
	}
	cout<<b[m-1];
	return 0;
}