#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010];
int vis;
queue<node> q;
int ans[300010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=m;i++){
		for(int j=i;j<=n;j++){
			if(!q.empty()) q.push(a[j]);
		else{
			if(q.find()!=a[j]) q.push(a[j]);
			else{
				for(int z=1;z<=j;j++) q.pop();
				q.push(a[j]);
			}
		}
		
	  }
	  for(int )
	}
	
	
	return 0;
}
