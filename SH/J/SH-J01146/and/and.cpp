#include <bits/stdc++.h>
using namespace std;
long long n,m;
long long num[200005];
long long ans[200005];
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(long long i=0;i<n;i++)
	{
		cin>>num[i];
	}
	long long cnt=0;
	sort(num,num+n+1,greater<int>());
	for(long long i=0;i<n;i++)
	{
		if(num[i]==num[i-1]||num[i]==num[i+1])
		{
			ans[cnt]=num[i];
			cnt++;
		}
	}
	sort(ans,ans+cnt+1,greater<long long>());
	long long sum=num[0];
	for(long long i=0;i<m;i++)
	{
		sum=sum&num[i];
	}
	cout<<max(sum,ans[0])<<endl;
	return 0;
}
