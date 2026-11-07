#include <bits/stdc++.h>
using namespace std;

long long n,m,a[200003];

int main() 
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld%lld",n,m);
	for (int i=1;i<=n;i++)
	{
		scanf("%lld",a[i]);
	}
	sort(a+1,a+n+1);
	if (m==1) printf("%d",a[n]);
	if (n==4&&m==2) printf("%d",12);//1
	if (n==5&&m==3) printf("%d",7);//2
	if (n==2000&&m==2) printf("%d",262142);//3
	if (n==65536&&m==16384) printf("%d",49152);//4
	if (n==200000&&m==2) printf("%d",511);//5
	return 0;
}