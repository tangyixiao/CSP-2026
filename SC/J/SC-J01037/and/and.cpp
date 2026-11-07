#include<bits/stdc++.h>
using namespace std;

int a[200005],x[200005];

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	int x=INT_MIN;
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			if((a[i]&a[j])>x)
			{
				x=(a[i]&a[j]);
			}
		}
	}
	cout<<x;
	return 0;
}