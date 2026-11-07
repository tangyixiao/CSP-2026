#include<bits/stdc++.h>
using namespace std;
int a[500005],ans[300005];
void solve(){
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		bool p[300005]={false};
		deque<int> q;
		for(int j=i;j<=n;j++){
			if(p[a[j]]==true){
				while(q.back()!=a[j]){
					q.pop_back();
				}
			}
			else{
				q.push_back(a[j]);
				p[a[j]]=true;
			}
		}
		while(!q.empty()){
			ans[q.back()]++;
			q.pop_back();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
}
int main(){
	freopen("card.in","r",stdin);
    freopen("card.out","w",stdout);
	solve();
	return 0;
} 
