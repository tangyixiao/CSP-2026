#include<bits/stdc++.h>
#define ll long long
#define pr pair<ll,int>
#define _1 first
#define _2 second
using namespace std;
const int N=2e5+5;
int n,m;
ll a[N],ts;
ll hh=(1<<30)-1;
bool fa=1,fb=1;
bool vis[N];
vector<int> sy;
vector<pr> h[35];
ll dn=0;
void dfs(int wz,ll sz,int gs){
	if(gs==m){
		dn=max(dn,sz);
		return;
	}if(wz==n){
		return;
	}
	dfs(wz+1,sz,gs); 
	dfs(wz+1,sz&(a[wz+1]),gs+1);
}
bool cmp(int x,int y){
	return x>y;
}
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); 
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	ts=n-1;
	while(ts){
		if((ts%2)!=1){
			fb=0;
			break;
		}
		ts>>=1;
	}
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]!=i-1){
			fb=0;
		}
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n;i++){
		ts=a[i];
		hh&=a[i];
		int gs=1;
		while(ts){
			if(ts%2){
				h[gs].push_back({a[i],i});
			}else{
				fa=0;
			}
			gs++;
			ts>>=1;
		}
	}
	if(n<=20){
		dfs(0,(1<<30)-1,0);
		cout<<dn<<'\n';
	}
	else if(m==1){
		cout<<a[n]<<'\n';
	}else if(m==2&&n<=2000){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				dn=max(dn,a[i]&a[j]);
			}
		}
		cout<<dn;
	}else if(m==n){
		cout<<hh;
	}else if(fa){
		sort(a+1,a+n+1,cmp);
		dn=(1<<30)-1;
		for(int i=1;i<=m;i++){
			dn&=a[i];
		}
		cout<<dn;
	}
	else if(fb){
		sort(a+1,a+n+1,cmp);
		dn=(1<<30)-1;
		for(int i=1;i<=m;i++){
			dn&=a[i];
		}
		cout<<dn;
	}
	else{
		for(int i=29;i>=0;i--){
			if(h[i].size()>=2){
				int gs=2;
				for(int j=h[i].size()-1;j>=0;j--){
					int id=h[i][j]._2;
					if(vis[id])continue;
					gs--;
					if(gs<0)break;
					vis[id]=1;
					sy.push_back(id);
				}
			} 
		}
		if(sy.size()>m){
			for(int i=sy.size()-1;i>=m;i--){
				vis[sy[i]]=0;
			}
		}
		if(sy.size()<m){
			bool f=0;
			for(int i=29;i>=0;i--){
				if(f)break;
				for(int j=h[i].size()-1;j>=0;j--){
					int id=h[i][j]._2;
					if(vis[id])continue;
					vis[id]=1;
					sy.push_back(id);
					if(sy.size()==m){
						f=1;
						break;
					}
				}
			}
		}
		dn=(1<<30)-1;
		for(int i=1;i<=n;i++){
			if(vis[i]){
				dn&=a[i];
			}
		}
		cout<<dn;
	}
	return 0;
} 
/*
部分分很美哦 65分部分分好吧
首先n<=20直接暴力看这个点选还是不选 25
m==1直接算个最大的 5
m==2直接暴力出来一个最大的 15
m==n直接算和 5
特殊性质A 排序后选前m个 5
特殊性质B 直接选后m个 10
先把充裕的部分分打了
我们可以把数字分为29组好吧每组就是第i位为一的 
从上往下找如果这一组有两个及以上就选完 然后标记那些数字选过
接着看总数超过m就按照选的顺序倒着删掉这么多个
不足就从高到底把没选过的拉进来凑数
额先打部分分吧 我这样打真的能有分吗 
*/
