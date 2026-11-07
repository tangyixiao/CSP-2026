#include<bits/stdc++.h>
#define int long long
using namespace std;
const int maxn=5e5+5;
int n,m,x,cnt,a[maxn],b[maxn];
int vis[maxn],sum[maxn],vs[maxn];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) x=1;
	}
	if(x==0){
		for(int i=1;i<=m;i++) cout<<n<<" ";	
		return 0;
	}
	for(int k=1;k<=n;k++){
		for(int i=1;i<=n;i++){
			b[i]=0;
			vs[i]=0;
			vis[a[i]]=0;
		} 
		for(int i=k;i<=n;i++){
			if(b[a[i]]){
				for(int j=b[a[i]]+1;j<i;j++){
					vs[j]=1;
				} 
			}
			else b[a[i]]=i;
		}
		for(int i=k;i<=n;i++){
			if(!vs[i]&&!vis[a[i]]){
				sum[a[i]]++;
				vis[a[i]]=1;
			} 
		} 
	}
	for(int i=1;i<=m;i++) cout<<sum[i]<<" ";
	return 0;
}