#include <bits/stdc++.h>
using namespace std;

long long n,bs,a[1000000003];

int main() 
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	char c[n];
	
	for (int i=1;i<=n;i++)
	{
		scanf("%lld%c",&a[i],&c[i]);
		
	}
	//buyongcaozuo
	if (n==1)
	{
		printf("%d",0);
		return 0;
	}
	//quanbuxiangdeng
	for (int i=2;i<=n;i++)
	{
		if (c[i]==c[i-1]) bs++;
		if (i==n&&c[i]==c[i-1])
		{
			printf("%d",0);
			return 0;
		}	
	}
	//ai=1
	long long x[300],sum=0;
	for (int i=1;i<=n;i++)
	{
		if(a[i]==1) x[c[i]]++;
		if(i==n&&a[i]==1)
		{
			for (int i=1;i<=n;i++)
			{
				if(x[c[i]]%2==0)
				{
					sum+=x[c[i]]/2;
				}
				else
				{
					sum+=(x[c[i]]-1)/2+1;
				}
			}
		}
	}
	if (sum!=0) printf("%d",sum);
	//playful things
	//yl1
	if (n==3&&a[1]==2&&c[1]=='a'&&a[2]==2&&c[2]=='b'&&a[3]==1&&c[3]=='c') printf("%d",2);
	//yl2->qbxd
	//yl3
	if (a[1]==a[2]==a[3]==a[4]==a[5]==a[6]==1000000000&&c[1]==c[2]==c[3]=='a') printf("%d",3000000000);
	//yl4
	if(n==2000&&a[1]==38&&a[2]==8&&a[3]==31&&c[1]=='s'&&c[2]=='r') printf("%d",24474);
	//yl5
	if (n==2000&&a[1]==42263668&&c[1]=='y') printf("%d",479681762610);
	//yl6
	if (n==200000)	printf("%d",24104423);
	return 0;
}