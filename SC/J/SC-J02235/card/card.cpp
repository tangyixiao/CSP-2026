#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
const int M=3e5+5;
int n,m;
bool vis[M];
int ans[M];
int no[N];
stack<int>q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>no[i];
	}
	for(int t=1;t<=n;t++){
		for(int i=t;i<=n;i++){
			if(vis[no[i]]==1){
				while(q.top()!=no[i]){
//					cout<<q.top()<<endl;
					vis[q.top()]=0;
					q.pop();
				}
			}else{
				q.push(no[i]);
				vis[no[i]]=1;
			}
		}
		while(!q.empty()){
			ans[q.top()]++;
			q.pop();
		}
		memset(vis,0,sizeof(vis));
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}