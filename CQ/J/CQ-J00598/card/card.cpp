#include<bits/stdc++.h>
using namespace std;
/*
struct node{
	int lst,sublst,pts;
}num[300005]; 
//lst[i]数字i最后一次出现的地方 
//sublst[i]数字i倒数第二次出现的地方 
int a[500005];
int ans[500005];
//ans[i]表示在所有n局游戏中，有多少局结束时桌面上留有点数为i的牌。
int cnt[300005];
//cnt[j]表示目前扫到了第i局游戏，a_i,a_(i+1)...a_n中 数字j出现的次数 
int difans[500005];
//ans的差分 
bool cmp(xonst node &x,const node &y)
{
	return x.sublst<y.sublst;
}
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	//freopen("card.in","r",stdin);
	//freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		cnt[a[i]]++;
	}
	for(int i=1;i<=m;i++)
	{
		num[i].pts=i;
	}
	for(int i=n;i>=1;i--)
	{
		if(!num[a[i]].lst)
		{
			num[a[i]].lst=i;
		}
		else if(!num[a[i]].sublst)
		{
			num[a[i]].sublst=i;
		}
	}
	//可以证明，在某局游戏结束之后，每种牌至多仅有一张，即lst[j];
	//这就给了我们差分的可能 
	//lst[j]前的所有一定会被清除，除非i>sublst[j]
	//我们只需要考虑在i右边且最靠左的sublst[j],区间[i,sublst[j]-1],
	//将被保留。如果不存在，则保留[i,n] 
	//再考虑在n左边且最靠右的lst[j],[lst[j],n]将被保留 
	//如上证明大前提错了 
	sort(num+1,num+m+1,cmp);
	for(int i=1;i<=n;i++)
	{
		 
	}
	return 0;
}
*/
int a[500005],lst[500005],ans[300005];
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
	}
	for(int i=n;i>=1;i--)
	{
		if(!lst[a[i]])
		{
			lst[a[i]]=i;
		}
	}
	for(int i=1;i<=n;i++)
	{
		int p=i;
		while(p<=n)
		{
			ans[a[p]]++;
			p=lst[a[p]];
			p++;
		}
	}
	for(int i=1;i<=m;i++)
	{
		cout<<ans[i];
		if(i!=m)
		{
			cout<<" ";
		}
	}
	return 0;
}
//平均时间复杂度:O(nlogm)
//最坏时间复杂度:O(nm) 
