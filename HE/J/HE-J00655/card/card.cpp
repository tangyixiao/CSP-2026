#include<bits/stdc++.h>
using namespace std;
queue<int> q;
int a[500005],vis[300005],ans[500005],x[500005];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int m,n;
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
		x[a[i]]=1;
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;j++){
			int pai=a[j];
			if(vis[pai]>0){
				while(!q.empty()){
					q.pop();
				}
			}
			q.push(pai);
			vis[pai]++;
		}
		for(int j=1;j<=m;j++){
			vis[j]=0;
		}
		while(!q.empty()){
			ans[q.front()]++;
			q.pop();
		}
	}
	for(int i=1;i<=m;i++){
		if(ans[i]!=0){
			cout << ans[i] << " ";
		}
	}
	
	
	return 0;
}
