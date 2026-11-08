#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	long long a;
	vector<long long> v;
	for(long long i=1;i<=n;i++)
	{
		cin>>a;
		v.push_back(a);
	}
	long long res=0;
	for(long long k=30;k>=0;k--)
	{
		long long tmp=res|(1<<k);
		long long cnt=0;
		for(long long c:v)
		{
			if((c&tmp)==tmp)
				cnt++;
		}
		if(cnt>=m)
			res=tmp;
	}
	cout<<res;
	return 0;
}
