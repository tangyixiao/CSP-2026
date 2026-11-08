#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
bool cmp(int a,int b)
{
	return a>b; 
}
int n,m;
long long a[200005];
int maxx=-100;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	} 
	sort(a+1,a+n+1,cmp);
	for(int i=1;i<m;i++)
	{
		 maxx=a[i];
		 maxx=maxx&a[i+1];
	}
	cout<<maxx;
	return 0; 
}



