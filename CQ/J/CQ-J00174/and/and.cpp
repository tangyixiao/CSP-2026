#include <bits/stdc++.h>
using namespace std;
long long a[200005][35],ma=-INT_MAX,vis[35],vid[35],k,ans,bj[200005]; 
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	vis[0]=1;
	for(long long i=1;i<=32;i++){
		vis[i]=vis[i-1]*2;
	}
	for(long long i=1;i<=n;i++){
		long long x;
		cin>>x;
//		cout<<x;
		for(long long j=32;j>=0;j--){
			if(x>=vis[j]){
//				cout<<vis[j]<<" ";
				a[i][j]++;
				x-=vis[j];
				vid[j]++;
			}
		}
//		cout<<endl;
	}
//	for(long long i=1;i<=n;i++){
//		for(long long j=0;j<=32;j++){
//			cout<<a[i][j]<<" ";
//		}
//		cout<<endl;
//	}
	for(long long i=32;i>=0;i--){
		if(vid[i]>=m){
//			cout<<vis[i];
//			cout<<1;
			if(i>ma){
				ma=i;
			}
			if(ma==i){
				for(long long j=1;j<=n;j++){
//					cout<<a[j][i];
					if(a[j][i]==1){
						bj[j]=1;
						k++;
					}
//					cout<<k;
				}
				ans+=vis[i];
			}else{
				long long w=0;
				for(long long j=1;j<=n;j++){
					if(bj[j]&&a[j][i]){
						w++;
					}
				}
//				cout<<w<<" ";
				if(w<m){
					continue;
				}
//				cout<<ans;
				for(long long j=1;j<=n;j++){
					if(a[j][i]==0&&bj[j]){
						bj[j]=0;
					}
				}
				ans+=vis[i];
			}
		}
	}
	cout<<ans;
	return 0;
}
/*
5 3
43 44 43 19 54 55
*/
