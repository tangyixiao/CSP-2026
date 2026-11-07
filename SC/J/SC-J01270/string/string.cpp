#include<bits/stdc++.h>
using namespace std;
const int N=2e8;
char c[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,sum=0;
	cin>>n;
	for(int i=1;i<=n;i++)
	{
		long long a;
		char b;
		cin>>a>>b;
		sum+=a;
		for(long long j=sum-a;j<sum;j++)
		{
			c[j]=b;
		}
	}
	long long cnt=0;
	for(long long i=0;i<sum/2;i++)
	{
		if(c[i]==c[sum-1-i])
		{
			continue;
		}
		else
		{
			cnt++;
		}
	}
	cout<<cnt;
	return 0;
}