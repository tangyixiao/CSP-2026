#include<bits/stdc++.h>
using namespace std;
const int N=500005;
int to[N],ans[N],cnt[N];
int pos[N];
bool vis[N];
int bute[N];
int n,m,a[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i];
	for(int i=n;i>=1;i--){
		if(!pos[a[i]]){
			bute[i]=a[i];
			cnt[i]++;
			to[i]=i;
			vis[i]=true;
		}else{
			to[i]=to[pos[a[i]]];
			cnt[to[i]]++;
		}
		pos[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		if(vis[i]){
			ans[bute[i]]+=cnt[i];
			cnt[to[i+1]]+=cnt[i];
		}
	}
	for(int i=1;i<m;i++)
		cout<<ans[i]<<' ';
	cout<<ans[m];
	return 0;
}