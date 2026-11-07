#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[500005],la[300005],cnt[300005];
bool b,vis[300005];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) b=true;
		la[a[i]]=i;
	}
	if(b==false){
		for(int i=1;i<=m;i++) cout<<la[i]<<" ";
		return 0;
	}
	for(int i=1;i<=n;i++){
		int l=i;
		memset(vis,false,sizeof vis);
		while(l<=n){
			vis[a[l]]=true;
			if(la[a[l]]==0) l++;
			else l=la[a[l]]+1;
		}
		for(int i=1;i<=m;i++){
			if(vis[i]==true) cnt[i]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<cnt[i]<<" ";
	return 0;
}