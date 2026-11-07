#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[1000000];
int maxx=-1;
int maxi;
int ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(maxx<=a[i]){
			maxx=a[i];
			maxi=i;
		}
	}
	ans=maxx;
	a[maxi]=-1;
	for(int i=1;i<=m-1;i++){
		maxi=0;
		maxx=-1;
		for(int j=1;j<=n;j++){
			if(maxx<a[j]){
				maxx=a[j];
				maxi=j;
			}
		}
		ans=ans&maxx;
		a[maxi]=-1;
	}
	cout<<ans;
	return 0;
}
