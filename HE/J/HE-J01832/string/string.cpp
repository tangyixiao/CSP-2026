#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	long long m;
	char a;
	string g[n];
	int cnt=0;
	for(int i=0;i<n;i++)
	{
		cin>>m>>a;
		cnt+=m;
		g[i]=a;
	}
	return 0;
}
