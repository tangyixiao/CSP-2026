#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	int t=1;
	vector<int> v(n);
	for(int i=1;i<=n;i++)
	{
		cin>>v[i];
	}
	for(int i=0;i<n-1;i++)
	{
		for(int j=i+1;j<=n;j++)
		{
			if(i&j>t)
			{
				t=i&j;
			}
		}
	}
	cout<<t;
	return 0;
}