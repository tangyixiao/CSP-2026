#include <bits/stdc++.h>
#define ll long long
using namespace std;
const int N=200005;
int a[N];
int myand;

bool cmp(int x,int y)
{
	return x>y;
}

int main()
{
	freopen("and.in", "r", stdin);
	freopen("and.out", "w", stdout);
	int n,m;
	cin>>n>>m;
	for(int i=0; i<n; i++)
	{
		cin>>a[i];
	}

	sort(a,a+n,cmp);
	if(m==1)
	{
		cout<<a[0]<<"\n";
		return 0;
	}
	if(m==n)
	{
		myand=a[0];
		for(int i=1; i<n; i++)
		{
			myand&=a[i];
		}
		cout<<myand;
		return 0;
	}
	myand=a[0];
	for(int i=1; i<m; i++)
	{
		myand&=a[i];
	}
	cout<<myand;
	return 0;
}
