#include<bits/stdc++.h>
using namespace std;
int n,m,a[200100];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a+1,a+1+n);
	if(m==1)
	{
		cout<<a[n];
	}
	else
	{
		cout<<"0";
	}
	return 0;
}