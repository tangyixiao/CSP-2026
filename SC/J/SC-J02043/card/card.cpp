#include<iostream>
#include<algorithm>
#include<vector>
#include<cstdio>
#include<queue>
#define lowbit(x) x&-x
typedef long long ll;
using namespace std;
ll n,m,ans;vector<ll> a,dp,dy,hou;
priority_queue<pair<ll,ll>,vector<pair<ll,ll>>,greater<pair<ll,ll>>> df;
int main(){
	freopen("card.in","r",stdin);freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;a.resize(n);dp.resize(n+1);dy.resize(m+1);hou.resize(m+1);
	for(ll&t:a)cin>>t;
	for(ll i=0;i<n;i++)hou[a[i]]=i;
	for(ll i=1;i<=n;i++){
		dp[i]=i;
		while((!df.empty())&&df.top().first<=i)ans-=dp[df.top().second],df.pop();
		dp[i]-=ans;if(hou[a[i-1]]!=i-1)df.push({hou[a[i-1]]+1,i}),ans+=dp[i];
	}
	for(ll i=1;i<=m;i++)cout<<dp[hou[i]+1]<<" ";
	cout<<endl;
	return 0;
}