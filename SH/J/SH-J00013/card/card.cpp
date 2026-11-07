#include<bits/stdc++.h>
using namespace std;
const int maxn=5e5+5;
int a[maxn];
int vis[maxn];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		vis[a[i]++];
	}
	for(int i=1;i<=m;i++){
		cout<<vis[a[i]];
	}
	return 0;
}
