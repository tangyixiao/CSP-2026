#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen(" string.in","r",stdin);
	freopen(" string.out","w",stdout);
	int n;
	scanf("%d",&n) ;
	long long a;
	char c,d;
	string b;
	for(int i=0;i<n;i++)
	{
		cin>>a>>c;
		for(int j=1;j<=a;j++)
		{
			b+=c;
		}
	}
	long long cnt=0,q=b.size();
	for(long long i=0;i<=q/2-1;i++)
	{
		if(b[i]!=b[q-1-i])
		{
			cnt++;
		}
	}
	printf("%d",cnt); 
	return 0;
 } 
