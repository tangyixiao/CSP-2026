#include<bits/stdc++.h>
using namespace std;
const int N=2e5+10;
long long n,m,ans,maxx,maxy;
long long a[N],dp[N];
int main(){ 
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
			
		}
		cout<<ans;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(j!=i){
				maxx=max(maxx,a[i]&a[j]);
			}
		}
	}
	if(m==2){
		cout<<maxx;	
		return 0;
	}else{
		for(int i=1;i<=m-2;i++){
			for(int j=1;j<=n;j++){
				maxy=max(maxy,maxx&a[j]);
			}
		}
		cout<<maxy;
		return 0;
	}
	return 0;
}
