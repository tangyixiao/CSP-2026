#include<bits/stdc++.h>
using namespace std;
int a[500010],cntm[300010];
bool vis[300010];
stack<int> st;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==0){
				st.push(a[j]);
				vis[a[j]]=1;
			}else{
				while(st.top()!=a[j]){
					vis[st.top()]=0;
					st.pop();
				}
			}
		}while(!st.empty()){
			cntm[st.top()]++;
			st.pop();
		}memset(vis,0,sizeof(vis));
	}for(int i=1;cntm[i]!=0;i++){
		cout<<cntm[i]<<" ";
	}return 0;
} 
