#include<bits/stdc++.h>
using namespace std;
int n,m,a[500001];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string .out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i>=n;i++)
	{
		cout<<i<<" ";
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
