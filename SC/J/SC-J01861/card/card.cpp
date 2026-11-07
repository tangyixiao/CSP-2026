#include<bits/stdc++.h>
#define ll long long
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],vis[M],ans[M];
stack<int>k;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=m;j++) vis[j]=0;
		for(int j=i;j<=n;j++){
			if(vis[a[j]]==0){vis[a[j]]=1;k.push(a[j]);}
			else while(k.top()!=a[j]&&!k.empty()){ vis[k.top()]=0;k.pop();}
		}
		while(!k.empty()){
			//cout<<k.top()<<' ';
			ans[k.top()]++;
			k.pop();
		}
		//cout<<endl;
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<" ";
	return 0;
}
//48