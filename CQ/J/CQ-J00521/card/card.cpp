#include<bits/stdc++.h>
#define int long long
using namespace std;
void io(){ios::sync_with_stdio(0);cout.tie(0);cin.tie(0);}
void fp(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
}
const int N = 5e5 + 1000;
const int N2 = 50000;
const int M = 3e5 + 20;
int a[N];int n,m;
int ans[M];
int vis[M];

main(){
	io();fp();
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
//	if(n<=5000){
		for(int k=1;k<=n;k++){
//			cout << k <<":{\n";
			for(int j=1;j<=m;j++) vis[j]=0;
			int op=k;
			for(int i=k;i<=n;i++){
				if(vis[a[i]]){
					for(int j=vis[a[i]];j<i;j++) vis[a[j]]=0;
				}vis[a[i]]=i;
			}
			for(int i=1;i<=m;i++) if(vis[i]) ans[i]++;
//			cout << k <<" ";
//			for(int i=1;i<=m;i++) cout << vis[i] <<" ";
//			cout <<"\n";
		}
		for(int i=1;i<=m;i++){
			cout << ans[i] <<" ";
		}return 0;
//	}
}
