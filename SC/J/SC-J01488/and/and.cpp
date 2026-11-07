#include<bits/stdc++.h>
using namespace std;
bool cmp(int c,int b){return c>b;}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n];
	for(int i=0;i<n;i++)
		cin>>a[i];
	sort(a,a+n,cmp);
	int ans;
	ans=a[0];
	for(int j=1;j<m;j++)
		ans=ans&a[j];
	cout<<ans;
	return 0;
 } 