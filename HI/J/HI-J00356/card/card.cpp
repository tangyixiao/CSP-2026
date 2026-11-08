#include <bits/stdc++.h>
using namespace std;
long long a[10000000],b[10000000],c[10000000],y;
int main()
{
	freopen("card.in","r",srdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	cout<<m<<" "<<a[1]<<" "<<n;
	return 0;
}


