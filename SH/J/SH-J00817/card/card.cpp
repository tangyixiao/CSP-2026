#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,ans[300009],frot[500009],help[300009],a[500009];
ll nxt[500009],stay[500009];
void solveBF(){
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=n;i>=1;i--){
		if(help[a[i]]==0)nxt[i]=-1,help[a[i]]=i;
		else nxt[i]=help[a[i]],help[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		for(int k=i;k<=n;k++){
			while(nxt[k]!=-1)k=nxt[k];
			ans[a[k]]++;
		}
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
}
void solve(){
	for(int i=1;i<=n;i++){
		cin>>a[i];
		frot[i]=help[a[i]],help[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		help[i]=0;
	}
	for(int i=n;i>=1;i--){
		if(help[a[i]]==0)nxt[i]=-1,help[a[i]]=i;
		else nxt[i]=help[a[i]],help[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		help[i]=0;
	}
	help[n]=n,stay[n]=n;
	for(int i=n-1;i>=1;i--){
		help[i]=min(help[i+1]-1,i-frot[i+1]);
		if(nxt[i]!=-1&&nxt[i]-stay[nxt[i]]<i){stay[i]=0;continue;}
		stay[i]=i-frot[i+1];
	}
	for(int i=1;i<=n;i++){
		ans[a[i]]+=stay[i];
		cout<<stay[i]<<" "<<help[i]<<" "<<frot[i]<<" "<<nxt[i]<<endl;
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	solveBF();
	return 0;
} 
