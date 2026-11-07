#include<bits/stdc++.h>
using namespace std;
vector<long long> v;
long long n,m;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(long long i=0;i<n;i++)
	{
		long long a;cin>>a;
		v.push_back(a);
	}
	long long q=0;
	if(m==1) {
		for(long long i=0;i<n;i++)
		{
			if(v[i]>=q) q=v[i];
		}
		cout<<q;
	}
	if(m==2)
	{
		for(long long i=0;i<n;i++)
		{
			long long w;
			for(int j=i+1;j<n;j++)
			{
				w=v[i]&v[j];
				if(w>=q) q=w;
			}
		}
		cout<<q;
	}
	if(m==n)
	{
		long long w=v[0];
		for(long long i=1;i<n;i++)
		{
			w=w&v[i];
		}
		cout<<w;
	}
	return 0;
}