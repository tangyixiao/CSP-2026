#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[500050],cnt[300050],ha,hb;
bool vis[300050];
stack <int> p;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]==2){
			hb=i;
		}
		else{
			ha=i;
		}
	}
	if(m==1){
		cout<<n;
		return 0;
	}
	if(m==2&&n>5000){
		cout<<ha<<" "<<hb;
		return 0;
	}
	for(int j=1;j<=n;j++){
		while(!p.empty()){
			p.pop();
		}
		for(int i=j;i<=n;i++){
			if(vis[a[i]]==0){
				p.push(a[i]);
				vis[a[i]]=1;
			}
			else{
				while(p.top()!=a[i]){
					vis[p.top()]=0;
					p.pop();
				}
			}

		}
		for(int i=1;i<=n;i++){
			cnt[i]+=vis[i];
			vis[i]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}