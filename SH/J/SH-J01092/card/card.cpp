#include<bits/stdc++.h>
#define N 500010
using namespace std;
long long a[N];
bool vis[N];
long long cnt[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);
	int n,m;cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		queue<int> q;
		for(int j=i-1;j<=n;j++){
			if(!vis[a[j]]){
				vis[a[j]]=1;
				q.push(a[j]);
			}
			else{
				while(q.empty()){
					q.pop();
				}
				q.push(a[j]);
			}
		}
		while(q.empty()){
			cnt[q.front()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}
