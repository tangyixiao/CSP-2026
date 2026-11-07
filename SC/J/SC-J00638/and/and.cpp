#include<bits/stdc++.h>
#define int long long
using namespace std;
bool tt[1008617];//一个数字是否淘汰，初始全部没被淘汰
bool c[200005][32];//c[i][j]表示第i个数字的第i为是多少
int n,m,a[1008617]; 
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	memset(c,0,sizeof(c));
	memset(tt,false,sizeof(tt));
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)
	{
		int sum=a[i];
		int j=0;
		while(sum)
		{
			c[i][j++]=sum&1;
			sum>>=1;
		}
//		for(int k=31;k>=0;k--)cout<<c[i][k];
//		cout<<'\n';
	}
	int ans=0;
	for(int i=31;i>=0;i--)
	{
		int res=0;
		for(int j=1;j<=n;j++)if(!tt[j])res+=c[j][i];
//		cout<<i<<' '<<res<<'\n';
		ans*=2;
		if(res<m)continue;
		for(int j=1;j<=n;j++)if(c[j][i]==0&&!tt[j])tt[j]=true;
		ans++;
	}
	cout<<ans;
	return 0;
}
/*
accepted 9:18 score:100 total score:300
*/
/*
4 2
0011
1111
1100
1100

考虑从高到低枚举每一位，如果当前位为1的非负整数数量小于m，那么直接下一位
如果大于等于m，那么其他数字立刻淘汰，在没有淘汰的数字中继续，这一位为1
最坏情况下时间复杂度为O(n \log_2{max_{a}}) ,即2e5*3e1=6e6，随便过 
显然可以算作O(n)，32倍常数 
分解考虑程序开始时即行分解，后面方便使用 
*/