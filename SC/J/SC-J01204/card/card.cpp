#include <bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],pre[N];
int ans[N],sum[M],suf[N];
vector<int> b[M];
bool vis[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		b[a[i]].push_back(i);
	}
	for(int i=1;i<=n;i++){
		if(i==b[a[i]][b[a[i]].size()-1]){
			vis[i]=1;
		}
		pre[i]=pre[i-1]+vis[i];
	}
	for(int i=1;i<=n;i++){
		if(vis[i]==1){
			int l=i,r=n,loc=i;
			while(l<=r){
				int mid=(l+r)>>1;
				if(pre[mid]-pre[i-1]<mid-i+1) r=mid-1;
				else loc=mid,l=mid+1;
			}
			suf[i]=loc;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;){
			if(vis[j]){
				ans[j]++,ans[suf[j]+1]--;
				j=suf[j]+1;
			}else{
				ans[b[a[j]][b[a[j]].size()-1]]++;
				ans[b[a[j]][b[a[j]].size()-1]+1]--;
				j=b[a[j]][b[a[j]].size()-1]+1;
			}
		}
	}
	for(int i=1;i<=n;i++){
		ans[i]+=ans[i-1];
		sum[a[i]]+=ans[i];
	}
	for(int i=1;i<=m;i++){
		cout<<sum[i];
		if(i<m) cout<<" ";
	}
	return 0;
}
