#include <bits/stdc++.h>
using namespace std;
int n,m;
vector<long long> v;
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	if(n==m)
	{
		long long d;
		long long ans;
		cin>>d;
		ans=d;
		for(int i = 2;i<=n;i++){
			cin>>d;
			ans&=d;
		}
		cout<<ans;
		return 0;
	}
	if(m==1){
		long long d;
		long long ans;
		for(int i = 1;i<=n;i++){
			cin>>d;
			ans=max(d,ans);
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		long long k,sum=0;
		for(int i = 0;i<n;i++){
			cin>>k;
			v.push_back(k);
		}
		for(int i = 0;i<n-1;i++)
		{
			for(int j = i+1;j<n;j++)
			{
				sum=max(sum,v[i]&v[j]);
			}
		}
		cout<<sum;
	}
	long long k;
	for(int i = 1;i<=n;i++){
		cin>>k;
		v.push_back(k);
	}
	return 0;
}

