#include<iostream>
#include<cstdio>
using namespace std;
int n,m,maxn=0;
int a[20005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxn=max(a[i],maxn);
	}
	cout<<maxn;
	fclose(stdin),fclose(stdout);
	return 0;
}