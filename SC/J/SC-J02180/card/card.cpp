#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int a[N],ans[M];
bool vis[N];
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		stack<int>s;
		for(int j=1;j<=m;j++){
			vis[j]=false;
		}
		for(int j=i;j<=n;j++){
			if(vis[a[j]]!=true){
				s.push(a[j]);
				vis[a[j]]=true;
			}
			else{
				while(s.top()!=a[j]){
					vis[s.top()]=false;
					s.pop();
				}
			}
		}
		for(int i=1;i<=n;i++){
			if(vis[i]==true)
			ans[i]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}