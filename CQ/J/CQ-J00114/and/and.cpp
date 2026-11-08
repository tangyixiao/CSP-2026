#include<bits/stdc++.h>
using namespace std;
int n,m,a[200001],maxn,ans1,ans2;
pair<string,int> s[200001];
pair<int,int> cnt[200001];
pair<string,int> change(int x)
{
	string ss="";
	int cnt=0;
	while(x)
	{
		int val=x%2;
		if(val)
			cnt++;
		ss=(char)('0'+val)+ss;
		x>>=1;
	}
	return {ss,cnt};
}
signed main()
{
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
	{
		cin>>a[i];
		auto c=change(a[i]);
		s[i].first=c.first;
		cnt[i].first=c.second;
		s[i].second=cnt[i].second=i;
		maxn=max(maxn,(int)s[i].first.size());
	}
	for(int i=1;i<=n;i++)
		if((int)s[i].first.size()<maxn)
			for(int j=s[i].first.size();j<maxn;j++)
				s[i].first='0'+s[i].first;
	sort(s+1,s+1+n);
	reverse(s+1,s+1+n);
	ans1=a[s[1].second];
	for(int i=2;i<=m;i++)
		ans1=ans1&a[s[i].second];
	sort(cnt+1,cnt+1+n,greater<pair<int,int>>());
	ans2=a[cnt[1].second];
	for(int i=2;i<=m;i++)
		ans2=ans2&a[cnt[i].second];
	cout<<max(ans1,ans2); 
	return 0;
}
/*
dp 会爆空间
显然贪心吧
肯定是二进制下从前到后 1 的个数来排序 
怎么转来着？
感觉切了，比 T2 简单 
ccccc
不能直接贪啊 
乱搞显然牛逼
用两个贪心给它全过了 

3 2
32 31 6

3
100000
011111
000110

6
*/
