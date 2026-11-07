#include<bits/stdc++.h>
using namespace std;
int a[200005];
bool cnt(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,cnt);
	int l=a[0];
	for(int i=1;i<m;i++)
	{
		l=(l and a[i]);
	}
	cout<<a[2];
}