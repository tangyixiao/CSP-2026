#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const ll N=2e5+5;
ll n,m,a[N],num;
bool vis[N];
ll dfs(ll aa,ll deep,ll o){
	if(deep==m)return aa;
	ll maxn=-1;
	for(int i=o;i<=n;i++){
		if(!vis[i]){
			vis[i]=true;
			ll op=aa&dfs(a[i],deep+1,i+1);
			maxn=max(maxn,op);
			vis[i]=0;
		}
	}
	return maxn;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vis[i]=true;
		num=max(num,dfs(a[i],1,i+1));
		cout<<num<<'\n';
		vis[i]=0;
	}
	cout<<num;
	return 0;
}
