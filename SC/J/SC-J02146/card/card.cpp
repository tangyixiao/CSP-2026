#include<bits/stdc++.h>
#define pii pair<int,int>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],ans[M],vis[M];
void gamee(int x){
	memset(vis,0,sizeof(vis));
	stack<int> st;
	for(int i=x;i<=n;i++){
		if(vis[a[i]]==1){
			while(st.top()!=a[i]){
				vis[st.top()]=0;st.pop();
			}
		}else{
			vis[a[i]]=1;
			st.push(a[i]);
		}
	}
	while(st.size()){
		ans[st.top()]++;st.pop();
	}
}
void solvegener(){
	for(int i=1;i<=n;i++){
		gamee(i);
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
}
void solveA(){
	for(int i=1;i<=n;i++){
		ans[a[i]]=max(i,ans[a[i]]);
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}	
}
bool checka(){
	for(int i=2;i<=n;i++){
		if(a[i]<a[i-1]) return false;
	}
	return true;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(checka()){
		solveA();
	}else{
		solvegener();
	}
	return 0;
}