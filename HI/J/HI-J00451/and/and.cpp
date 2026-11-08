#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200001],s[1000000000000000000],q;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		s[a[i]]++;
	}
	for(long long i=1000000000000000000;i>=0;i--)
	{
		if(m==0)
			break;
		if(s[i]!=0)
		{
			q=i;
			m--;
		}
	}
	cout<<q;
	return 0;
} 
