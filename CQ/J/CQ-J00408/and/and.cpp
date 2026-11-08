#include <bits/stdc++.h>
using namespace std;
const int N=1e5*2+10;
int n,m,ans=1,ma=INT_MIN;
int a[N];
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+n+1,cmp);
	for(int i=2;i<=m;i++)
	{
		a[i]=a[i-1]&a[i];
	}
	cout<<a[m]<<'\n';
	fclose(stdin);
	fclose(stdout);
	return 0;
}
