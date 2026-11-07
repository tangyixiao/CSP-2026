#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N];
int fst[N],dp[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
		++dp[a[i]];
	}
	for (int i=n;i>=1;i--)
		fst[a[i]]=max(fst[a[i]],i);
	for (int i=1;i<=n;i++)
		if (fst[a[i]]==i) dp[a[i+1]]+=dp[a[i]];
	for (int i=1;i<=m;i++)
		cout<<dp[i]<<' ';
	return 0;
}

/*
前言：这整场比赛真的有任何难度吗？

666，写个 T4 想画个草图，结果没给我发稿纸？ 

为什么我写前三题足足花了半个多小时！

我本以为 T4 的长题面能给个绿/青的题，结果发现好像是下位黄？ 

我真怕我想简单了，但是思路好像并没有什么漏洞，甚至很顺利地。 

还有就是为什么删掉注释后字节数按题目倒序啊。 

						——mengnn 
						
不是，没稿纸就算了，我怎么连怎么确认单也没有啊？！ 
*/
