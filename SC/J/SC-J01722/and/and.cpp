#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int N=2e5+5;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	int a[N]={};
	ll ans=0;
	ll maxa=0;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=1;i<=n/2;i++){
		swap(a[i],a[n-i+1]);
	}
//	for(int i=1;i<=n;i++){
//		cout<<a[i]<<" ";
//	} cout<<"\n\n";
	if(m==2){
		for(int i=1;i<=n;i++){
			maxa=a[i];
			//for(int j=1;j<=m-1;j++){
				//bool vis[N]={};
				for(int k=i+1;k<=n;k++){
					//if(vis[k]) continue;
					//cout<<j<<": "<<maxa<<" and "<<a[k]<<" = ";
					maxa=maxa & a[k];
					//cout<<maxa<<"\n";
					ans=max(maxa,ans);
					//vis[k]=1;
				}
			//}
			
			//cout<<ans<<" "<<maxa<<"\n\n";
		}	
		cout<<ans;
		return 0;
	}
	
	maxa=a[1];
	for(int i=2;i<=m;i++){
		maxa=maxa & a[i];
	}
	ans=maxa;
	//int d=524288 & 262144;
	cout<<ans;
	return 0;
} 