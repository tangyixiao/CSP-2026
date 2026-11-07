#include <bits/stdc++.h>
using namespace std;
bool cmp(int b,int c)
{
	return b>c;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200005];
	
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i]>>b[i];
		
	}
	sort(a,a+n,cmp);
	cout<<a[m-1];
	return 0;
}