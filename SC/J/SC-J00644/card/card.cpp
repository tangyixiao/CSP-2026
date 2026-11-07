#include<bits/stdc++.h>
using namespace std;
const int N=5e5+10;
int n,m;
int a[N];
int vis[N];
int cnt[N];
stack<int>q;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int j=1;j<=n;j++){
		memset(vis,0,sizeof vis);
		for(int i=j;i<=n;i++){
			if(vis[a[i]]){
				int x;
				do{
					x=q.top();
					q.pop();
					vis[x]--;
				}while(x!=a[i]&&!q.empty());
			}
			q.push(a[i]);
			vis[a[i]]++;
		}
		while(!q.empty()){
			cnt[q.top()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}