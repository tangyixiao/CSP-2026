#include<bits/stdc++.h>
#define int long long 
using namespace std;
const int M=3e5+100,N=5e5+100;
int n,m,a[N],ans[N];
int vis[M],op[N];
stack<int> q;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);cin.tie(0);cout.tie(0);
	cin>>n>>m;bool f=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];op[a[i]]=i;
		if(a[i-1]>a[i])f=1;
	}
	if(f==0){
		for(int i=1;i<=m;i++){
			cout<<op[i]<<' ';
		}return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
//			cout<<a[j]<<' '<<vis[a[j]]<<'\n';
			if(!vis[a[j]])q.push(a[j]),vis[a[j]]++;
			else{	//cout<<q.size()<<' ';
				while(!q.empty()&&q.top()!=a[j]){
					vis[q.top()]--;q.pop();//cout<<q.top()<<'\n';
				}
			}
		}
	
		while(!q.empty())ans[q.top()]++,q.pop();
		for(int j=1;j<=m;j++)vis[j]=0;
//		for(int j=1;j<=m;j++)cout<<ans[j]<<' ';
//		cout<<'\n';
	}
	for(int i=1;i<=m;i++)cout<<ans[i]<<' ';
	return 0;
}
