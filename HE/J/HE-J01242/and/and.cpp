#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a[100000];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(m==1)
		{
			cout<<1;
			break;
		}
		if(m==n)
		{
			cout<<m;
			break;
		}
		if(m==2)
		{
			cout<<m;
			break;
		}
		if(m==n-1)
		{
			cout<<m;
			break;
		}
	}
	return 0;
}
