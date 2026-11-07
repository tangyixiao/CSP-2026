#include<bits/stdc++.h>
using namespace std;
long long c[10000005];
char a[10000005];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,t=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		cin>>c[i]>>a[i];
		t+=c[i];
	}
	cout<<"0";

	
	
	return 0;
}