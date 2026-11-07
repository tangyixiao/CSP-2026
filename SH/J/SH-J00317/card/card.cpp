#include<bits/stdc++.h>
using namespace std;
int n,m,b[300010],s[500010];
bool vis[300010];
stack<int> a;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>s[i];
	}
	for(int j=0;j<n;j++){
		memset(vis,0,sizeof(vis));
		for(int i=j;i<n;i++){
			int x=s[i];
			if(vis[x]){
				while(1){
					if(a.top()==x){
						break;
					}
					vis[a.top()]=0;
					a.pop();
				}
			}
			else{
				a.push(x);
				vis[x]=1;
			}
		}
		while(!a.empty()){
			b[a.top()]+=1;
			a.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<b[i]<<" ";
	}
	return 0;
}
