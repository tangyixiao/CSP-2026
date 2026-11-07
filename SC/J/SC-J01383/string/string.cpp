#include<bits/stdc++.h>
using namespace std;
const long long NUM=1e9+1;
char ch[NUM];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	long long change=0;
	cin>>n;
	long long a;
	char c;
	long long len=0;
	for(long long i=1;i<=n;i++)
	{
		cin>>a>>c;
		for(long long j=len;j<len+a;j++)
		{
			ch[j]=c;
		}
		len+=a;
	}
	for(long long i=0;i<len/2;i++)
	{
		
		if(ch[i]!=ch[len-i-1])
		{
			change++;
		}
	}
	printf("%lld",change);
	return 0;
}