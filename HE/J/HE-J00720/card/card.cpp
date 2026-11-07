#include <bits/stdc++.h>
using namespace std;
int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,a[5005],b[3005]={},aptm[3005];
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
    for(int i=1;i<=n;i++)
	{
		if(a[n]!=a[n-1])
	    {
	    	aptm[a[n]]++;
    	}
	}
	cout<<aptm[1]<<aptm[2];
	fclose(stdin);
	fclose(stdout);
	return 0;
}
