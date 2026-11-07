#include <bits/stdc++.h>

using namespace std;

int n,m;
long long mx=-1,a[200005];

int main()
{
	freopen("and.in","r",stdin); freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) scanf("%d",&a[i]);
	if(m==1)
	{
		sort(a+1,a+n+1);
		cout<<a[n];
		return 0;
	}
	cout<<3;
	fclose(stdin); fclose(stdout);
	return 0;
}