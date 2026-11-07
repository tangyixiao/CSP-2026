#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b)
{
	return a<b;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n,maxx;
	cin>>m>>n;
	int a[n+1];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n,cmp);
	cout<<a[2];
	return 0;
}
