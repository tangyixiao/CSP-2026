#include<bits/stdc++.h>
using namespace std;
//luogu id:afewdgre
int n,m,a[500005],las[3005],num,tong[3005],ans[3005];
signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
//	for(int i=1;i<=m;i++) tong[i]=n+1;
	for(int i=1;i<=n;i++) cin>>a[i];
//	for(int i=n;i;i--){
//		las[i]=tong[a[i]];
//		tong[a[i]]=i;
//	}
	for(int i=1;i<=n;i++){
		stack<int> v;
		memset(tong,0,sizeof tong);
		for(int j=i;j<=n;j++){
			if(tong[a[j]]==0){
				v.push(a[j]);
				tong[a[j]]++;
			}	
			else{
				while(v.top()!=a[j]){
					tong[v.top()]--;
					v.pop();
				} 
			}
		}
		while(!v.empty()){
			ans[v.top()]++;
			//cout<<v.top()<<' ';
			v.pop();
		}
		//cout<<'\n';
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
}

