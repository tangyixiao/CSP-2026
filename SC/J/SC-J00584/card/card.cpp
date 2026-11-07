#include<bits/stdc++.h>
using namespace std;
long long n,m,vis[500010][2],a[500010],t[500010][2],anst[500010],f;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1])f=1;
		t[a[i]][0]++;
		if(t[a[i]][0]%2==0&&vis[t[a[i]][1]][0]==0){
			for(int j=t[a[i]][1]+1;j<=i-1;j++){
				vis[j][0]++;
				vis[j][1]=max(vis[j][1],t[a[i]][1]);
			}
		}else t[a[i]][1]=i;
	}
	if(!f){
		long long now=a[1];
		for(int i=1;i<=n;i++){
			if(a[i]!=now){
				anst[now]=i-1;
				now=a[i];
			}
		}
		anst[a[n]]=n;
		for(int i=1;i<=m;i++)cout<<anst[i]<<" ";
		return 0;
	}
	for(int i=1;i<=n;i++){
		if(vis[i][0]){
			anst[a[i]]+=(i-vis[i][1]);
		}else{
			anst[a[i]]+=i;
		}
	}
	for(int i=1;i<=m;i++)cout<<anst[i]<<" ";
	return 0;
	//不可以骗分总司令，CCF让我多拿一点分吧！（用chb五年单身）
}