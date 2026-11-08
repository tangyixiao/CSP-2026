#include<bits/stdc++.h>
using namespace std;
const int maxn = 2e5 + 40;
long long n,m,a[maxn],ans=0;
string w[maxn];
bool vis[35];
inline void init(long long k,long long sum){
	static int ls[35];
	memset(ls,0,sizeof(ls));	
	long long j=0;
	while(sum>0){
		ls[++j]=sum%2;
		sum/=2;
	}
	w[k]+=' ';
	for(int i=30;i>=1;--i) w[k]+=(char)(ls[i]+'0');
}
void dfs(int k,int now,long long sum){
	if(now==m){
		ans=max(ans,sum);
		return ;
	} 
	if(k>n) return ;
	dfs(k+1,now+1,sum&a[k]);
	dfs(k+1,now,sum);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin.tie(nullptr)->ios::sync_with_stdio(false);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		init(i,a[i]);
	}
	if(n<=20){
		dfs(1,0,(1<<31)-1);
		cout<<ans<<'\n';
		return 0;
	}
	for(int j=1;j<=30;++j){
		int sum=0;
		for(int i=1;i<=n;++i) if((vis[j-1]&&w[i-1][j]!='0'&&w[i][j]=='1')||(!vis[j-1]&&w[i][j]=='1')) sum++;
		if(sum<m) for(int i=1;i<=n;++i) w[i][j]='0';
		else vis[j]=1;
	}
	sort(w+1,w+n+1,[](string x,string y){
		return x>y;
	});
	for(int j=1;j<=30;++j){
		int sum=0;
		for(int i=1;i<=m;++i) if(w[i][j]=='1') sum++;
		if(sum>=m) ans+=(1<<(30-j)); 
	}
	cout<<ans;
}
