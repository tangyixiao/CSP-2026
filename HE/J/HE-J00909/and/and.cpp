#include<bits/stdc++.h>
using namespace std;
const int N=2e5+7;
typedef long long ll;
int n,m;
int a[N],ch[N][2];
int cnt[N],b[N];
int t;
void get(int x,int i){
	int res=1;
	while(x){
		b[i]+=b[i]*res;
		x>>=1;
		res<<=1;
	}
}
void insert(int x){
	int u=0;
	for(int i=0;i<30;i++){
		int b=x&(1<<i);
		if(!ch[u][b]){
			ch[u][b]=++t;
		}
		u=ch[u][b];
		cnt[u]++;
	} 
}
int ans=0;
inline void dfs(int u,int r,int dep){
	if(dep>30||r<0)return;
	if(ch[u][1]!=0&&cnt[ch[u][1]]>r)ans|=(1<<dep),dfs(ch[u][1],r,dep+1);
	else if(ch[u][0]!=0)r=m-cnt[ch[u][1]],dfs(ch[u][0],r,dep+1);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		get(a[i],i);
		insert(b[i]);
	}
	dfs(0,m,0);
	cout<<ans;
	return 0;
}
