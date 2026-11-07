#include <bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
const int N=2e5+10; 
int n,m,a[N],vis[N],ans[N];
vector<int> q;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++){
			vis[j]=0;
		}
		for(int j=i;j<=n;j++){
			if(vis[a[j] ]>0){
				while(q[q.size()-1]!=a[j]){
					vis[q[q.size()-1]]=0;
					q.pop_back(); 
				}
				q.pop_back();
			}
			vis[a[j] ]=1;
			q.push_back(a[j]);
		}
		while(q.size() ){
			ans[q[q.size()-1]]++;
			q.pop_back();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}