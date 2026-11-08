#include<bits/stdc++.h>
using namespace std;
int n,m,x,a[200005][35],f[200005],ans;
int main(){
	//printf()
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		scanf("%d",&x);
		int cnt = 0;
		while(x>0){
			a[i][cnt++] = x%2;
			x >>= 1;
		}
	} 
	for(int k=31;k>=0;k--){
		int cnt = 0;
		for(int i=1;i<=n;i++) if(f[i]!=1) cnt += a[i][k];
		if(cnt>=m){
			ans += pow(2,k);
			for(int i=1;i<=n;i++) if(a[i][k]==0) f[i] = 1;
		}
	} 
	cout<<ans;
	return 0;
}

