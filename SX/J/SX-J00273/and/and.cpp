#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll n,a[1000000],m,sum,l,h[1000000];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(int i=0;i<n;i++)
	{
		for(int j=i+1;j<n;j++)
		{
			l=max(a[j]&a[i],l);
		}
	}
	cout<<l;
	return 0;
}
