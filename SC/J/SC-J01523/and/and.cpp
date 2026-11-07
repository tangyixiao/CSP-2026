#include <bits/stdc++.h>
using namespace std; 
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int n,m;
long long a[200100];
long long f[200100];
int main(int argc, char** argv)
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		f[i]=a[i];
	}
	long long maxx=-1e9;
	for(int i=1;i<=n;i++)
	{
		for(int j=i;j<=n;j++)
		{
			f[i]=max(a[i],a[i]&a[j]);
		}
	}
	long long  ma=-1e9;
	for(int i=1;i<=n;i++)
		ma=max(ma,f[i]);
	cout<<ma;
	return 0;
}
/*

4 2
3 15 12 12
5 3
31 3 1 15 7

*/
/*
f[j]=max(f[i],f[j-c[i]]+c[i])
*/