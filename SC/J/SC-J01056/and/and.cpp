#include <bits/stdc++.h>
using namespace std;
int n,m;
long long a[100005];
long long sum=0;
int main()
{
	freopen("and.in","r"stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin >>  n >> m;
	long long a[100005];
	for(int i = 1;i<=n;i++)
	{
		cin >> a[i];
	}
	long long maxx = 1000000000000000;
	for(int i = 1;i<=n;i++)
	{
		if(a[i]<maxx)
		{
			maxx  = a[i];
		}
	}
	cout << maxx;
	return 0;
	
}