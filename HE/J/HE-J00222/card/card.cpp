#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+10;
int n,m,a[maxn],ans[maxn],ln[maxn],tot;
stack<int> stk;
bool vis[maxn];
struct duan{
	int l,r,v;
}b[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	bool flaga=true;
	int cnt=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<a[i-1]) flaga=false;
		if(i<n&&a[i]!=a[i+1]) cnt++;
	}
	if(flaga){
		int p=0;
		for(int i=1;i<=n;i++){
			if(a[i]==p) ln[p]++;
			else p=a[i],ln[p]=1;
		}
		for(int i=1;i<=m;i++) ans[i]=ans[i-1]+ln[i];
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
		return 0;
	}
	if(m==1){
		cout<<n<<'\n';
		return 0;
	}
	if(m==2){
		if(a[n]==1){
			ans[1]=n;
			for(int j=1;j<=n;j++) if(a[j]==2) ans[2]++;
			cout<<ans[1]<<' '<<ans[2];
		}
		if(a[n]==2){
			ans[2]=n;
			for(int j=1;j<=n;j++) if(a[j]==1) ans[1]++;
			cout<<ans[1]<<' '<<ans[2];
		}
		return 0;
	}
	if(n<=5000){
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++) vis[j]=false;
			for(int j=i;j<=n;j++){
				if(vis[a[j]]){
					while(stk.top()!=a[j]){
						vis[stk.top()]=false;
						stk.pop();
					}
				}
				else{
					stk.push(a[j]);
					vis[a[j]]=true;
				}
			}
			while(!stk.empty()){
				ans[stk.top()]++;
				stk.pop();
			}
		}
		for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
		cout<<'\n';
		return 0;
	}
	int p=1;
	for(int i=1;i<=n+1;i++){
		if(a[i]!=a[p]){
			b[++tot]=(duan){p,i-1,a[p]};
			p=i;
		}
	}
	for(int i=1;i<=tot;i++){
		for(int j=1;j<=tot;j++) vis[j]=false;
		for(int j=i;j<=tot;j++){
			if(vis[b[j].v]){
				while(stk.top()!=b[j].v){
					vis[stk.top()]=false;
					stk.pop();
				}
			}
			else{
				stk.push(b[j].v);
				vis[b[j].v]=true;
			}
		}
		while(!stk.empty()){
			ans[stk.top()]+=(b[i].r-b[i].l+1);
			stk.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	cout<<'\n';
	fclose(stdin); fclose(stdout);
	return 0;
}
