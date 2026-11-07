#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=2e5+10;
ll a[N],n,m,ans,nxt[N],pre[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		nxt[i]=i+1,pre[i]=i-1;
	}
	nxt[0]=1,pre[n+1]=n;
	for(int k=30;k>=0;k--){
		ll u=(1<<k),cnt=0;
		for(int i=nxt[0];i<=n;i=nxt[i]){
			if((a[i]&u)!=0) cnt++;
		}
		if(cnt<m) continue;
		ans+=u;
		for(int i=nxt[0];i<=n;i=nxt[i]){
			if((a[i]&u)==0){
				nxt[pre[i]]=nxt[i];
				pre[nxt[i]]=pre[i];
			}
		}
	}
	cout<<ans;
	return 0;
}
