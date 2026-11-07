#include<bits/stdc++.h>
using namespace std;
const int N=2*1e5+10;
const long long L=2*1e9+1e8;
long long n;
char a[L];
unsigned long long ans;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long num;
	char c;
	unsigned long long p=1,r=1,l;
	for(long long i=1;i<=n;i++)
	{
		cin>>num;
		cin>>c;
		for(int i=1;i<=num;i++)
		{
			a[p]=c;
			p+=1;
		}
	}
	p-=1;
	l=p;
	while(l>=r)
	{
		if(a[l]!=a[r]) ans+=1;
		l-=1,r+=1;
	}
	cout<<ans;
	return 0;
}