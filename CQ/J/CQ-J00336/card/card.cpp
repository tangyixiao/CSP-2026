#include <bits/stdc++.h>
using namespace std;
stack <int>z;
stack <int>q;
int vis[300005],c[300005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[n+5];
	for(int i=1;i<=n;i++){
		cin>>a[i];

	}
	for(int i=1;i<=n;i++){
		vis[a[i]]++;
		z.push(a[i]); 
		if(vis[a[i]]>1){
			int b=z.top();
			for(int j=1;j<=n;j++){
				z.pop();
				if(z.top()==b){
					break;
				}
			}
			vis[b]=1;
		}
		for(int j=1;j<=z.size();j++){
		
		q.push(z.top());
		c[q.top()]++; q.pop();}
	}
	for(int i=1;i<=m;i++) cout<<c[i]<<" ";
	return 0;
}
