#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5;
int n,m;
int a[N],b[N],ct;
bool vis[N];
int ton[N];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		stack<int>s;
		memset(vis,0,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==0){
				s.push(a[j]);
				vis[a[j]]=1;
			}
			else if(vis[a[j]]==1){
				while(1){
					if(s.top()==a[j]){
						break;
					}
					vis[s.top()]=0;
					s.pop();
				}
			}
		}
		while(!s.empty()){
			ton[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ton[i];
		if(i!=m) cout<<" ";
	}
	return 0;
} 
