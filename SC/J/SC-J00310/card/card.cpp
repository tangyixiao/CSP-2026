#include<bits/stdc++.h>
using namespace std;
long long n,m,a[500001],vis[500001],id[500010],ju[500010];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int t = 1;
	for(int x=1;x<=n;x++){
		for(int i=1;i<=n;i++){
			vis[i] = 0;
		}
		for(int i = t;i<=n;i++){
			if(vis[a[i]] == 0){
				vis[a[i]] = 1;
				id[a[i]] = i;
				continue;
			}	
			for(int j = id[a[i]]+1;j<i;j++){
				vis[a[j]] = 0;
			}
			id[a[i]] = i;
		}
		for(int i=1;i<=m;i++){
			if(vis[i] == 1) ju[i]++;
		}
		t++;
	}
	for(int i=1;i<=m;i++){
		cout<<ju[i]<<' ';
	}
	return 0;
}