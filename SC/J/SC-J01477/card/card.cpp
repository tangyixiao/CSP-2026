#include<bits/stdc++.h>
using namespace std;
long long cnt[300005],vis[300005],a[500005],dp[500005],p[500005];
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}	
	for(long long i=n;i>=1;i--){
		p[i]=vis[a[i]];
		vis[a[i]]=i;
	}
	for(long long i=1;i<=n;i++){
		dp[i]=1;
	}
	for(long long i=1;i<=n;i++){
		if(p[i]==0){
			cnt[a[i]]+=dp[i];
			dp[i+1]+=dp[i];
		}else{
			dp[p[i]]+=dp[i];
		}
	}
	for(long long i=1;i<=m;i++){
		cout<<cnt[i]<<' ';
	}
	return 0;
}
//代码敲慢一点！！！
//注意freopen
//注意数组大小
//注意函数返回值
//注意取模
//60
//1 1 1 2 2 1 1 2 2 1 1 2 

