#include <bits/stdc++.h>
using namespace std;
const int N=2e5;
int n,m,ms=0,a[N];
string s[N];
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++)
		cin>>a[i];
	sort(a+1,a+n+1,cmp);
	cout<<a[m];
	for (int i=1;i<=n;i++)
	{
		while (a[i]>0)
		{
			s[i]+=a[i]%2;
			a[i]/=2;
		}
		ms=max(ms,(int)s[i].size());
	}
	for (int i=1;i<=n;i++)
		while (s[i].size()<ms)
			s[i]='0'+s[i];
	return 0;
}