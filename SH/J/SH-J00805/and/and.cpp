#include<iostream>
#include<algorithm>
#include<vector>
#include<iomanip>
#include<set>
#include<map>
#include<cstdio>
#include<cmath>
#include<cctype>
using namespace std;
int w=0;
//// 
/// 全局变量/函数区
int n,m;
int a[200010];
int ans;
bool b[200010];
const int bitlimit=30;
inline bool getbit(int a,int x)
{
	return (a>>x)&1;
}
//// 
/// 主函数区 
int main()
{
	ans=0;
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for (int i=bitlimit-1;i>=0;i--)
	{
		int cnt=0;
		for (int j=1;j<=n;j++)
		{
			if (b[j]==0)cnt+=getbit(a[j],i);
		}
		if (cnt>=m)
		{
			ans|=1<<i;
			for (int j=1;j<=n;j++)
			{
				if (!getbit(a[j],i))b[j]=1;
			}
		}
	}
	cout<<ans<<endl;
	return (0>w<0);
}
