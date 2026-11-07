#include<bits/stdc++.h>
using namespace std;string c;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[200005];char b[200005];cin>>n;
	for(int i=1;i<=n;i++)
	{cin>>a[i]>>b[i];for(int j=0;j<a[i];j++) c=c+b[i];}
	long long d=0;
	for(long long i=0;i<c.size()/2;i++)if(c[i]!=c[c.size()-i-1])d++;
	cout<<d;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
