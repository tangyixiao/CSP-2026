#include<bits/stdc++.h>
using namespace std;
int a[200005];
int main()
{
	freopen("and1.in","r",stdin);
	freopen("and1.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<n;i++)
	{
		int k=a[i];
		int j=i-1;
		while(j>=0&&a[j]>k)
		{
			a[j]=a[j-1];
			j--;
		}
		a[j+1]=k;
	}
	int x=0;
	for(int i=0;i<n;i++)
	{
		x|=a[i];
	}
	cout<<x<<endl;
	return 0;
}
