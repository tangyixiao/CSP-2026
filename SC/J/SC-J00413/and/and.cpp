#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,m,a[200010],k,cnt,ans,cnt1,cnt2;
bool vis[200010],vis1[200010];
bool cmp(int x,int y){return x>y;}
signed main(){
	freopen("and.in","r",stdin);freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+n+1,cmp);
	for(int i=30;i>=0;i--){
		k=1<<i;cnt=0;cnt2=cnt1;
		memcpy(vis1,vis,sizeof vis1);
		for(int j=1;cnt1<=m&&j<=n;j++){
			if(a[j]&k){
				if(vis[j])cnt++;
				else cnt++,cnt1+=!vis[j],vis[j]=1;
			}
		}if(cnt>=m){
			int j=n;
			while(cnt1>m&&j>=0){
				if(vis[j])cnt1--,cnt-=bool(k&a[j]),vis[j]=0;
				j--;
			}if(cnt1<=m&&cnt>=m)ans+=k;
		}else{
			cnt1=cnt2;
			memcpy(vis,vis1,sizeof vis);
		}
	}cout<<ans;
	return 0;
}