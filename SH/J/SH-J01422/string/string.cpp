#include <bits/stdc++.h>
using namespace std;
char b[200005],c[1000005];
long long a[200005],ans,ff,n;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(long long i=1;i<=n;i++)
	{
		cin>>a[i]>>b[i];
		for(long long j=ff+1;j<=ff+a[i];j++) c[j]=b[i];
		ff+=a[i];
	}
	for(long long i=1;i<=ff/2;i++)
	{
		if(c[i]!=c[ff-i+1]) ans++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
 } 
