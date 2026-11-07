#include<bits/stdc++.h>
//#define int long long
using namespace std;
stack<int> s;
bool vis[300005];
int ans[300005];
int A[500005];
//signed main() {
int main() {
	ios::sync_with_stdio(false),cin.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>A[i];
	}
	for(int i=1;i<=n;i++){
		memset(vis,false,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(!vis[A[j]]){
				vis[A[j]]=true;
				s.push(A[j]);
			}
			else{
				while(s.top()!=A[j]){
					vis[s.top()]=false;
					s.pop();
				}
			}
		}
		while(!s.empty()){
			ans[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<' ';
	return 0;
}