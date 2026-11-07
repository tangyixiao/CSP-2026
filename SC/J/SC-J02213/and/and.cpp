#include<bits/stdc++.h>
using namespace std;

const int maxn=2e5+10;

long long a[maxn],b[maxn],n,m;
bool cmp(int x,int y)
{
	return x>y;
}
int main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	/*
	贪心的思想，容易发现我们要尽量使每一位尽量含有1 
	由于与的性质，我们发现对于相同位数的数，如果其无法保证最高位为1，即个数小于m，则取最高为也无效
	由此，我们可以枚举位数 
	那么我们应当对所有数的后k位提出排序:容易得到提取公式a&(1<<k)-1 
	此题得解 
	勉强能过吧 
	*/
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	
	long long ans=-1;
	for(int k=1;k<=31;k++)
	{
		long long tmp=(long long)1<<k;
		for(int i=1;i<=n;i++)
		{
			b[i]=a[i]&(tmp);
			b[i]-=1;
		}
			
		sort(b+1,b+n+1,cmp);
		
	//	for(int i=1;i<=n;i++)
	//	{
	//		cout<<a[i]<<' ';
	//	}
		
		long long res=b[1];
		for(int i=2;i<=m;i++)
		{
			res=res&b[i];
		}
		
		ans=max(ans,res);
	}
	cout<<ans;
	
	return 0;
}