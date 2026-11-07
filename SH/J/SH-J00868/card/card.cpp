#include<iostream>
#include<stack>
#include<cstring>
using namespace std;

const int M=3e5+5,N=5e5+5;
int a[N],ans[M];
bool vis[M];
int n,m;

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	stack <int> s;
	cin>>n>>m;
	for(int i=1;i<=n;i++){cin>>a[i];}
	for(int i=1;i<=n;i++){
		memset(vis,false,sizeof(vis));
		for(int j=i;j<=n;j++){
			if(!vis[a[j]]){
				vis[a[j]]=1;
				s.push(a[j]);
			} 
			else {
				while(s.top()!=a[j]){
					vis[s.top()]=0;
					s.pop();
				}
			}
		}
		while(s.size()){
			ans[s.top()]++;
			s.pop();
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}
