#include<bits/stdc++.h>
using namespace std;

const int N=5e5+5, M=3e5+5;
int w[N], an[M];
bool vis[M];
stack <int> st; 

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	
	int n, m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>w[i];
	}
	for(int i=1;i<=m;i++){
		cout<<an[i];
	} 
	
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			if(vis[w[j]]==1){
				while(st.top()!=w[j]){
					st.pop();
				}
			}
			else{
				vis[i]=1;
				st.push(w[i]);
			}
		}
		while(!st.empty()){
			an[w[i]]++;
			st.pop();
		}
		for(int i=1;i<=m;i++){
			vis[i]=0;
		}
	}
	
	for(int i=1;i<=m;i++){
		cout<<an[i]<<" ";
	}
	return 0;
}
