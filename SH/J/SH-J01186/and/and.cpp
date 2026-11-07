#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<int> book[40];
long long num[200005];
long long ans[200005];
long long d[33]={1,2,4,8,16,32,64,128,256,512,1024,2048,4096,8192,16384,32768,65536,131072,262144,524288,1048576,2097152,4194304,8388608,16777216,33554432,67108864,134217728,268435456,536870912,1073741824,2147483648,4294967296};
void check(long long now,int step)
{
	for(int i=32;i>=0;i--)
	{
		if(now-d[i]>=0)
		{
			book[i].push_back(step);
			now-=d[i];
		}
	}
	return;
}
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>num[i];
		check(num[i],i);
	}
	
	for(int i=32;i>=0;i--)
	{
		int bsize=book[i].size();
		if(bsize<m) continue;
		for(int j=0;j<bsize;j++)
		{
			ans[j+1]=num[book[i][j]];
		}
		sort(ans+1,ans+bsize+1,cmp);
		break;
	}
	cout<<ans[m];
	return 0;
}
