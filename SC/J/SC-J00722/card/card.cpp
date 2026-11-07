#include<bits/stdc++.h>
using namespace std;
const int N=1e6+10;
int n,m;
int a[N],ans[N];
vector<int> v;
int vis[N];
void solve(int x){
	for(int i=x;i<=n;i++){
		if(vis[a[i]]==1){
			for(int j=0;j<v.size();j++){
				if(v[j]==a[i]){
					while(v.size()>j){
						vis[v[v.size()-1]]--;
						v.pop_back();
					}
					break;
				}
			}
		}
		v.push_back(a[i]);
		vis[a[i]]++;
	}
	for(int i=1;i<=m;i++)if(vis[i]==1)ans[i]++,vis[i]=0;
	while(v.size())v.pop_back();
	
}
int main(){
	freopen("r","card.in",stdin);
	freopen("w","card.out",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=1;i<=n;i++)solve(i);
	for(int i=1;i<=m;i++)cout<<ans[i]<<" ";
	return 0;
}