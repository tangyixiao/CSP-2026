#include<bits/stdc++.h>
using namespace std;
int n,m,a[500010],vis[300010],res[300010],latest[300010];
int game[500010],l=n;
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		latest[a[i]]=i;
	}
	while(!vis[a[l]]&&l>=1){
		vis[a[l]]=1;
		l--;
		game[l]++;
	}
	for(int i=1;i<=n-1;i++){
		game[i]++;
		if(latest[a[i]]==i){
			res[a[i]]+=game[i];
			game[i+1]+=game[i];
		}else{
			game[latest[a[i]]]+=game[i];
		}
	}
	game[n]++;
	res[a[n]]+=game[n];
	for(int i=1;i<=m;i++)cout<<res[i]<<' ';
	return 0; 
}
