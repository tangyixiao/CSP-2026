#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long1 n,cnt=0,sum=1;
	cin>>n;
	char s[1000005];
	for(int i=1;i<=n;i++)
	{
		int m;
		cin>>m;
		char z;
		cin>>z;
		for(int j=sum;j<sum+m;j++)
		{
			s[j]=z;
		}
		sum+=m;
	}
	sum-=1;
	int ans=sum,b=0;
	for(int i=1;i<=sum/2;i++)
	{
		if(s[i]!=s[ans-i+1])
		{
			b++;
		}
	}
	cout<<b;
	
	

	
	
	
    
	
}
