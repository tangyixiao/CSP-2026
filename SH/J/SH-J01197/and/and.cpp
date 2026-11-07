#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
int n,m,ans,tot,a[N],b[N];
vector<int> g[35];
void solve(){
	for(int j=29;j>=0;j--) g[j].clear();
	for(int i=1;i<=tot;i++)
		for(int j=29;j>=0;j--)
			if((1<<j)&b[i]) g[j].push_back(b[i]);
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;tot=n;
	for(int i=1;i<=n;i++){cin>>a[i];b[i]=a[i];}
	tot=n=2000;m=2;
	solve();
	for(int i=29;i>=0;i--){
		if(g[i].size()>=m){
			tot=0;
			for(int j:g[i]) b[++tot]=j;
			solve();
			ans+=(1<<i);
		}
	}
	cout<<ans;
	return 0;
}
