#include <bits/stdc++.h>
using namespace std;
int n;
long long a[100000005];
long long b[100005];
int c[100005];
int cnt;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>b[i]>>c[i];
	}
		for(int i=1;i<n;i++)
	{
		if(c[i]==c[i-1])cnt++;
	}
	if(cnt==n-1) cout<<0;
	
	return 0;
}
