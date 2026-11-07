#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n;
	cin>>n;
	string S;
	long long gs[n+2];
	long long sum=0;
	for(long long i=1;i<=n;i++)
	{
		long long p;
		cin>>p;
		gs[i]=p;
		sum+=p;
		char q;
		cin>>q;
		for(long long j=1;j<=p;j++)
		{
			S+=q;
		}
	}
	long long cnt=0;
	if(sum%2==1)
	{
		cnt+=1;
	}
/*	while((S[z-1]==S[y-1])&&z>=1&&y<=sum)
	{
		cout<<z<<" "<<y<<endl;
		z--;
		y++;
		cnt+=2;
	}*/
	for(long long i=1;i<=sum/2;i++)
	{
		if(S[i-1]==S[sum-i])
		{
			cnt+=2;
		}
	}
	cout<<(sum-cnt)/2;

	return 0;
}
