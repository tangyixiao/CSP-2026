/*
f[l]表示最右侧的可用位置
fa[l]表示l的来历
f2[l]表示l的使用次数 
可以有一个优化，即删掉f[l]，一个单独的点也算入
将全部同色的f2累加就是结果了
mp[i]表示i的最右侧出现位置
懒得模样例了，写就完了 
*/
#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[1008617],fa[1008617],f2[1008617],mp[1008617],ans[1008617];
signed main()
{
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=n;i>=1;i--)
	{
		if(mp[a[i]]==0)mp[a[i]]=i;//最右侧出现位置
		fa[i]=mp[a[i]]+1; 
		f2[i]++;	
	} 
	for(int i=1;i<=n;i++)
	{
		f2[fa[i]]+=f2[i];
	}
	for(int i=1;i<=n;i++)ans[a[i]]+=f2[i];
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
/*
accepted 10:26 score:100 total score:400
all killed 10:26
my first csp-j ak
*/