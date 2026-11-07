#include <bits/stdc++.h>
using namespace std;
int main (){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	int n,m;
	int a[500];
	int now[500];
	int ans[500];
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int ooo=1;ooo<=n;ooo++){
		int t=1;
		memset(now,0,sizeof now);
		for(int i=ooo;i<=n;i++){
			now[t]=a[i];
			t++;
			for(int j=1;j<=t;j++){
				if(now[j]==now[t]){
					for(int k=j;k<=t;j++){
						now[k]=0;
					}
					break;
				}
			}
		}
		for(int j=1;j<=t;j++){
			ans[now[j]]++;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<" ";
	}
	return 0;
}