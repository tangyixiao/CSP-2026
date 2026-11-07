#include<bits/stdc++.h>
#define N (int)1e5+5
using namespace std;
int V,w,dp[N][2],v[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>V>>w;
	if(V==w){
		int ans;
		cin>>ans;
		while(--V){
			int x;
			cin>>x;
			ans&=x;
		}
		cout<<ans<<endl;
	}
	else{
		for(int i=1;i<=V;i++){
			cin>>v[i];
			dp[i][0]=v[i];
		}
		int hang=1,lsthang=0;
		for(int i=2;i<=V;i++){
			for(int j=w;j>=1;j--){
				dp[i][hang]=max(dp[i][lsthang],dp[i-1][lsthang]&v[i]);
				swap(hang,lsthang);
			}
		}
		cout<<dp[V][hang]<<endl;
	}
	return 0;
}
