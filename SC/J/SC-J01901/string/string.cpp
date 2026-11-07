#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long n,m,b=0,cnt=0,o=1,p;
	cin>> n;
	string a[9999];
	
	for (int i=1;i<=n;i++) 
	{
		cin>>m>>a[b+1];
		a[0]=a[1];
		for (int j=1;j<=m;j++)
		{
			a[b+1]=a[b];
			b++;
			p*=b;
		 } 
		
		
	}

	for (int i=1;i<=p/2;i++)
	{
		if (a[i]!=a[i-1]) o=0;
		if (a[i] !=a[n+1-i]) cnt++;
	}
	if(o) cout<<0;
	else cout<<cnt;
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	return 0; 
}
