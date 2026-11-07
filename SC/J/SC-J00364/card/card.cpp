#include<bits/stdc++.h>
using namespace std;
int n,m,a[100010];
int t;
queue<int> q;
int k[100010];
queue<int> g;
void solve(){
	q.push(a[t]);
	for(int i=t+1;i<=n;i++){
		int l=0;
		while(!q.empty()){
			if(q.front()==a[i]){
				l=1;
				q.pop();
			}
			else{
				if(l==0){
					g.push(q.front());
				}
				q.pop();
			}
		}
		if(l==1){
			while(!g.empty()){
				q.push(g.front());
				g.pop();
			}
			q.push(a[i]);
		}
		else{
			while(!g.empty()){
				q.push(g.front());
				g.pop();
			}
			q.push(a[i]);
		}
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	t=1;
	while(t<=n){
		solve();
		while(!q.empty()){
			k[q.front()]++;
			q.pop();
		}
		t++;
	}
	for(int i=1;i<=m;i++){
		cout<<k[i]<<" ";
	}
	return 0;
}