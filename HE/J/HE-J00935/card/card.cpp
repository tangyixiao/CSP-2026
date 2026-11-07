#include<bits/stdc++.h>
using namespace std;
long long m,n;
long long a[500010];
long long sum[300015];
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin >>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin >>a[i];
		sum[a[i]]++;
	}
	if(m==1)
	{
		cout <<1;
		exit(0);
	}
	for(int i=1;i<=m;i++)
	{
		cout <<sum[i]<<" ";
	}
	return 0;
}
