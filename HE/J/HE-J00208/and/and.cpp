#include <bits/stdc++.h>
using namespace std;
int n,m,a[200010],x,b[200010];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	sort(a,a+n+1);
	int i=n;
	for(int j=1;j<=n;j++)
	{
		b[j]=a[i];
		i--;
	}
	cout<<b[m];
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
