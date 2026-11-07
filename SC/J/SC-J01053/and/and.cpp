#include <bits/stdc++.h>
#include <cstdio>
#include <stdio.h>
using namespace std;
const int N=2e5+5;
int n,m;
long long a[N],maxn=0;
int main() 
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	if(m==1)cout<<maxn;
	return 0;
}