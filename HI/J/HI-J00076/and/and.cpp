#include<bits/stdc++.h>
using namespace std;
int n,m,ans;
bool vis[200005];
bitset<32> a[200005];
vector<bitset<32> > v; 
void dfs(int st){
	for(int i=st;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++)
			if(a[j][i]&&!vis[j])cnt++;
		if(cnt>=m){
			if(cnt>m){
				for(int j=1;j<=n;j++)if(!(a[j][i]&&!vis[j]))vis[j]=1;
				dfs(i-1);
			}
			if(cnt==m){
				for(int j=1;j<=n;j++)if(!(a[j][i]&&!vis[j]))vis[j]=1;
				return;
			}
			break;
		}
	}
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		int x;
		cin>>x;
		a[i]=bitset<32>(x);
	}
	dfs(31);
	for(int i=1;i<=n;i++)
		if(!vis[i]){
			if(!ans) ans=a[i].to_ulong();
			else ans&=a[i].to_ulong();
		}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

