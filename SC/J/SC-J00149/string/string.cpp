#include<bits/stdc++.h>
using namespace std;
int n;
string s;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		char c;
		int t;
		scanf("%d%c%c",&t,&c,&c);
		while(t--)s+=c;
	}
	long long l=s.size(),sum=0;
	for(int i=0;i<l/2;i++)
	sum+=(s[i]!=s[l-i-1]);
	printf("%lld",sum);
	return 0;
}