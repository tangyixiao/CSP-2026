#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+10;
int n,a[N],m,ans=-0x3f3f3f3f,u;
//虽说搜索稀烂，但仍可一试
//num：当前所选的数的个数 p：和 t:当前选到哪了
void dfs(int num,int p,int t){
	if(t==n+1 && num!=m) return;
	if(num==m){
		ans=max(ans,p);
		return;
	}
	int l=p&a[t];
	if(p==0) l=a[t];
	dfs(num+1,l,t+1);
	dfs(num,p,t+1);
	return;
}
//妈妈我会打搜索了！
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	int fa=1,fb=1;
	for(int i=1;i<=n;i++) {
		cin>>a[i];
		if(a[i]!=i-1) fa=0;
		if(sqrt(a[i]+1)*sqrt(a[i]+1)!=a[i]+1) fb=0;
	}
	if(m==1){
		int num=-0x3f3f3f3f;
		for(int i=1;i<=n;i++) num=max(num,a[i]);
		cout<<num;
		return 0;
	}
	if(m==n){
		int num=a[1];
		for(int i=2;i<=n;i++) num=num&a[i];
		cout<<num;
		return 0;
	}
	if(m==2){
		int num=-0x3f3f3f3f;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				num=max(num,a[i]&a[j]);
			}
		}
		cout<<num;
		return 0;
	}
	if(fa==1){
		cout<<n-m;
		return 0;
	}
	if(fb==1){
		sort(a+1,a+n+1);
		int num=a[n],cnt=0;
		for(int i=n-2;i>=1;i--){
			if(cnt>=m) break;
			cnt++;
			num=num&a[i];
		}
		cout<<num;
		return 0;
	}
	dfs(0,0,1);
	cout<<ans;
	return 0;
}
/*
普及
妈妈我会打搜索了！正解应该是DP
10：15暴力
11：30疯狂骗分 运气好可有65pts
*/