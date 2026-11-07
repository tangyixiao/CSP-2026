#include<bits/stdc++.h>
using namespace std;
const int N = 5e5 + 100;
int n,m;
int a[N];
int ans[N];
stack<int> q;
int f[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(f[a[j]]){
				while(q.top()!=a[j]){
					f[q.top()] -= 1;
					q.pop();
				}
			//	f[a[j]] += 1;
			}else{
				q.push(a[j]);
				f[a[j]] += 1;
			}
		}
		while(!q.empty()){
			ans[q.top()] += 1;
			f[q.top()] = 0;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
/*
10 3
3 1 2 1 3 2 3 1 2 1
*/
