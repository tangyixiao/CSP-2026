#include<bits/stdc++.h>
#define int long long
using namespace std;

// vis [i][j] 表示第 i 个数能否参与第 j 位的保留 
// i+1 保留比 i 位保留永远更优 O(30) * O(n) 
//flag [i] 第 i 是否可以被使用 

const int N=2e5+100;

int vis[N][50],n,m,a[N],x,tot,ans,flag[N],cnt; 

inline void dfs(int x){
	if(x<0)return;
	
	cnt=0;
	
	for(int i=1;i<=n;i++)
		if(vis[i][x]&&!flag[i])
			cnt++;
	
	if(cnt>=m){
		for(int i=1;i<=n;i++)
			if(!vis[i][x])
				flag[i]=1;
				
		ans+=pow(2,x);
	}
	
	dfs(x-1);
}

signed main(){
	ios::sync_with_stdio(false);
	cin.tie(nullptr);
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	
//	cout<<(int) pow(2,30);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		
		x=a[i],tot=-1;
		
		while(x!=0){
			vis[i][++tot]=(x&1);
			x>>=1;
		}
	} 
	
	dfs(30);
	
	cout<<ans;
	return 0;
}
