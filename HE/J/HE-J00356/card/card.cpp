#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,m,a[500010],mp[500010],vis[500010];
void youxi(int x){
	while(x!=n+1){
		x=vis[a[x]];
		mp[a[x]]++;
		x++;
	}
}
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=1;i<=n;i++){
		vis[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		youxi(i);
	}
	for(int i=1;i<=m;i++) cout<<mp[i]<<' ';
	return 0;
}

