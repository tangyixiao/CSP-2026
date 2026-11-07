#include <bits/stdc++.h>
using namespace std;
int a[200007],t[20007],st[20007],ans[200007];
queue<int> q;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n-i;j++){
			if(st[a[j]]==1) continue;
			if(!t[a[j]]){
				t[a[j]]=1;
				q.push(a[j]);
			}
			else{
				int len=q.size(),f=1;
				for(int x=1;x<=len;x++){
					int v=q.front();
					q.pop();
					if(v==a[j])f=0;
					if(f) q.push(v);
				}
			}
		}
		for(int j=1;j<=m;j++){
			if(t[j]) ans[j]++;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
