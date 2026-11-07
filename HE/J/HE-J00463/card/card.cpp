#include<bits/stdc++.h>
using namespace std;
const int N=5e5+5,M=3e5+5;
int n,m,a[N],ans[M],c[M];
bool b[M];
stack<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++)
		cin>>a[i],c[a[i]]++;
	if(n*n*0.5<1e8){
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				if(q.empty()||!b[a[j]]){
					q.push(a[j]);
					b[a[j]]=true;
					continue;
				}
				while(q.top()!=a[j]){
					b[q.top()]=false;
					q.pop();
				}
			}
			while(!q.empty()){
				ans[q.top()]++,b[q.top()]=false;
				q.pop();
			}
		}
	}
	else{
		for(int i=1;i<=m;i++)
			ans[i]=c[i];
		ans[a[n]]=n;
	}
	for(int i=1;i<=m;i++)
		cout<<ans[i]<<' ';
	return 0;
}
