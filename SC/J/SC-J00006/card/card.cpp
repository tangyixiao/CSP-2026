#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
constexpr int N=1e6+7;
int n,m,a[N],to[N],cnt[N],add[N],nxt[N],res[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=n;i;i--){
		cnt[i]=1;
		if(nxt[a[i]]) to[i]=nxt[a[i]];
		else to[i]=i+1,add[i]=a[i];
		nxt[a[i]]=i;
	}for(int i=1;i<=n;i++){
		if(add[i]) res[add[i]]+=cnt[i];
		cnt[to[i]]+=cnt[i];
	}for(int i=1;i<=m;i++) cout<<res[i]<<' ';
	return 0;
}