#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],cnt[M];
bool vis[M];
stack<int> q;
void rs(int x){
	while(!q.empty()){
		int now=q.top();
		q.pop();
		if(now==x){
			break;
		}
	}
	return ;
}
void chk(){
	while(!q.empty()){
		int now=q.top();
		q.pop();
		cnt[now]++;
	}
	return ;
}
void run(int x){
	memset(vis,0,sizeof(vis));
	for(int i=x;i<=n;i++){
		if(vis[a[i]]==0){
			q.push(a[i]);
			vis[a[i]]=1;
		}
		else{
			rs(a[i]);
			q.push(a[i]);
		}
	}
	chk();
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		run(i);
//		for(int i=1;i<=m;i++){
//			cout<<cnt[i]<<" ";
//		}
//		cout<<endl;
	}
	for(int i=1;i<=m;i++){
		cout<<cnt[i]<<" ";
	}
	return 0;
}