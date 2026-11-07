#include<bits/stdc++.h>
using namespace std;
long long nb[10000000];
struct w{
	long long a,b;
}num[10000000];
long long ans[10000000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	long long n,m;
	cin>>n>>m;
	stack<int> q;
	for(int i=1;i<=n;i++)
	{
		cin>>nb[i];
	}
	long long cnt,cnt1;
	cnt1=n;
	cnt=1;
	long long sum;
	while(cnt1>0)
	{
		cnt1--;
		for(long long i=cnt;i<=n;i++)
		{
			q.push(nb[i]);
			num[nb[i]].a++;
			if(num[nb[i]].a==1) num[nb[i]].b=i;
			if(num[nb[i]].a!=1)
			{
				for(long long j=1;j<=i-num[nb[i]].b+1;j++)
				{
					q.pop();
				}
				num[nb[i]].a=1;
				num[nb[i]].b=i;
				q.push(nb[i]);
			}	
		}
		for(long long i=cnt;i<=n;i++)
		{
			num[nb[i]].a=0;
			num[nb[i]].b=0;
		}
		long long x;
		x=q.size();
		for(long long i=1;i<=x;i++)
		{
			sum=q.top();
			ans[sum]++;
			q.pop();
		}
		cnt++;
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i]<<' ';
	}
	return 0;
}