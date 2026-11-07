#include <bits/stdc++.h>
using namespace std;
long long k[200004];
char c[200005];
long long sum=0;
long long n;
int main()
{
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i = 1;i<=n;i++)
	{
		cin>>k[i]>>c[i];
	}
	if(n==1){
		cout<<0;
		return 0;
	}
	long long l = 1,r=n;
	bool t;
	long long p;
	while(l<r)
	{
		p=min(k[l],k[r]);
		if(c[l]==c[r]) t=0;
		if(c[l]!=c[r]) t=1;
		k[l]-=p;
		k[r]-=p;
		if(k[l]==0)
		{
			l++;
		}
		if(k[r]==0){
			r--;
		}
		if(t==1) sum+=p;
	}
	cout<<sum;
	return 0;
}

