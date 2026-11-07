#include<bits/stdc++.h>
using namespace std;

const int MAXN=5e5+11,MAXM=3e5+11;
int n,m;
int a[MAXN],vis[MAXM],ans[MAXM];
stack<int> st;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int turn=1;turn<=n;turn++){
		for(int i=turn;i<=n;i++){
			if(!vis[a[i]]){
				vis[a[i]]=1;
				st.push(a[i]);
			}
			else{
				while(st.top()!=a[i]){
					vis[st.top()]=0;
					st.pop();
				}
			}
		}
		while(!st.empty()){
			ans[st.top()]++;
			vis[st.top()]=0;
			st.pop();
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	cout<<"\n";
	return 0;
}