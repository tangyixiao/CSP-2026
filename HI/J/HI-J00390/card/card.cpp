#include<bits/stdc++.h>
using namespace std;

int main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	vector<long long> v;
	for(long long i=1;i<=n;i++)
	{
		long long a;
		cin>>a;
		v.push_back(a);
	}
	vector<long long> ans(m+1,0),u(n+1);
	long long xia=0;
	for(long long i=1;i<=n;i++)
	{
		u=vector<long long>(m+1),xia=0;
		for(auto c:v)
		{
			auto _xia=find(u.begin(),u.begin()+xia,c);
			if(!u.empty()&&_xia!=u.end())
			{
				fill(_xia,xia+u.begin(),0);
				xia=_xia-u.begin();
			}
			u[xia++]=c;
		}
		for(auto c:u)
			ans[c]++;
		v.erase(v.begin());
	}
	for(long long i=1;i<=m;i++)
		cout<<ans[i]<<" "; 
	return 0;
}
