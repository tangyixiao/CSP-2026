#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m,a[N],ans[N],pos[N];
bool vis[N],f[N],SubA=1;
int main(){
	freopen("card.in","r",stdin),freopen("card.out","w",stdout);
	ios::sync_with_stdio(false),cin.tie(0),cout.tie(0),cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i],SubA=SubA&&(a[i]>=a[i-1]?1:0);
	if(m==2){
		for(int i=n;i>0;i--){
			vis[a[i]]=1,ans[1]=(vis[1]?ans[1]+1:ans[1]);
			if(vis[2]) ans[2]++;
		}
		cout<<ans[1]<<' '<<ans[2];
		return 0;
	}
	if(SubA) for(int i=1;i<=n;i++) if(ans[a[i]]==0) ans[a[i]]=n-i+1;
	if(!SubA) for(int i=n;i>0;i--){
		if(pos[a[i]]==0) pos[a[i]]=i;
		else{
			for(int j=i;j<pos[a[i]];j++) vis[j]=1;
			pos[a[i]]=i;
		}
		for(int j=i;j<=n;j++) if(!vis[j]&&!f[j]) ans[a[j]]++,f[j]=1;
		memset(f,0,sizeof(f));
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}
