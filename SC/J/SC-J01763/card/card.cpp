#include<bits/stdc++.h>
#define int long long
#define endl '\n'
using namespace std;
signed main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdout);
	int n,m,p[100000],ans=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>p[i];
	}
	for(int i=1;i<=n;i++){
		int q[100000];
		for(int j=i;j<=n;j++){
			q[i]=p[i];
		}
		for(int j=1;j<n-i;j++){
			for(int k=1;k<n-i;k++){
				if(q[j]==q[k]&&q[j]!=0&&q[k]!=0){
					for(int l=1;l<n-i-k;l++){
						q[l]=0;
					}
				}
			}
			for(int k=0;k<n-i;k++){
				if(q[k]==i){
					ans++;
				}
			}
			cout<<ans<<' ';
			ans=0;
		}
	}
	return 0;
}