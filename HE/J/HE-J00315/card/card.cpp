#include<bits/stdc++.h>
using namespace std;
const int N=5e6+10;
long long n,m,a[N],d[N],ans[N],t;
int main() {
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		d[i]=1;
	}
	for(int i=1;i<=n;i++){
		t=0;
		for(int j=i+1;j<=n;j++){
			for(int k=j+1;k<=n;k++){
				if(a[j]==a[k]){
					for(int o=j;o<k;o++) d[o]=0;
					t=k;
				}
			}
			for(int p=j;p<=n;p++){
				if(d[p]!=0){
					ans[a[j]]++;
				}
			}
			for(int u=1;u<=n;u++) d[u]=1;
		}
	}
	for(int i=1;i<=m;i++) cout<<ans[i]<<" ";
	return 0;
}
