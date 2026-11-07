#include<bits/stdc++.h>
using namespace std; 
const int N=5e5+50,M=3e5+50;
int n,m;
int a[N];
bool b[M];
int k[M];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	queue<int> q;
	for(int i=1;i<=n;i++){
		if(b[a[i]]==0){
			q.push(a[i]);
			while(q.front()!=a[i]){
				int w=q.front();
				q.pop();
				q.push(w);
			}
			b[a[i]]=1;
		}
		else {
			while(q.front()!=a[i]) {
				int w=q.front();
				q.pop();
				b[w]=0;
			} 
		}
		for(int j=1;j<=m;j++){
			if(b[j]==1) k[j]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<k[i]<<" ";
	} 
	return 0;
}
