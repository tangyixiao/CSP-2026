#include<bits/stdc++.h>
using namespace std;
const long long N=1000000000;
char m[N];
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long a,ans,n,p;
	a=0;
	ans=0;
	p=0;
	cin>>n;
	for(int q=0;q<n;q++)
	{
		long long b;
		char c;
		cin>>b>>c;
		if(b<N-10)
		{
			for(int i=a;i<a+b;i++)
			{
				m[i]=c;
			}
			a+=b;
		}
		else
		{
			p=1;
		}
	}
	for(int i=0;i<a/2;i++)
	{
		if(m[i]!=m[a-1-i])
		{
			ans++;
		}
	}
	if(p==1)
	{
		ans=(n/2)*N;
	}
	cout<<ans;
	return 0;
 } 