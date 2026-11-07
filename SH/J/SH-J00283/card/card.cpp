#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,ma,a[500010],sum[100010],t[300010],mp[200010],vis[200010],ans[200010];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0); 
	cin>>n>>m;
	int f=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])f=1;
		t[a[i]]++;
	}
	if(!f){
		for(int i=1;i<=m;i++){
			t[i]+=t[i-1];
			cout<<t[i]<<" ";
		}
		return 0;
	}
//	if(n<=500){
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++)vis[j]=mp[j]=ans[j]=0;
		int l=0;
		for(int j=i;j<=n;j++){
			if(vis[a[j]]){
				while(ans[l]!=a[j]){
					vis[ans[l]]=0;
					l--;
				}
			}
			vis[a[j]]=1;
			l++;
			ans[l]=a[j];
		}
		for(int j=1;j<=l;j++){
			if(mp[ans[j]]==0)sum[ans[j]]++;
			mp[ans[j]]=1;
		}
	}
	for(int i=1;i<=m;i++)cout<<sum[i]<<" ";
	return 0;
//	}
//	for(int i=1;i<=n;i++){
//		memset(vis,0,sizeof(vis));
//		memset(mp,0,sizeof(mp));
//		memset(ans,0,sizeof(ans));
//		int l=0;
//		for(int j=i;j<=n;j++){
//			
//			if(vis[a[j]]&&vis[a[j]]<l){
//				l=vis[a[j]];
//			}
//			l++;
//			vis[a[j]]=l;
//			ans[l]=a[j];
//		}
//		for(int j=1;j<l;j++){
//			if(mp[ans[j]]==0)sum[ans[j]]++;
//			mp[ans[j]]=1;
//		}
//	}
//	for(int i=1;i<=m;i++)cout<<sum[i]<<" ";
	return 0;
}
