#include<bits/stdc++.h>
using namespace std;
int ans[3005];
int b[3005];
int a[200005];
int p[3005];
int e[200005];

int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	ios::sync_with_stdio(0),cin.tie(0),cout.tie(0);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(p[a[i]]){
			e[p[a[i]]]=i;
		}
		p[a[i]]=i;
	}
	for(int i=1;i<=n;i++){
		if(!e[i]){
			e[i]=i+1;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=i;j<=n;){
			b[a[j]]++;
			j=e[j];
		}
		for(int j=1;j<=m;j++){
			ans[j]+=(bool)b[j];
			b[j]=0;
		}
	}
	for(int i=1;i<=m;i++){
		cout<<ans[i]<<' ';
	}
	return 0;
}