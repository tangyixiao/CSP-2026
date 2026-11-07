#include<bits/stdc++.h>
#define int long long
#define INF 0x3f3f3f3f
#define fi first
#define se second
using namespace std;
const int N=2e5+10;
int n,m,a[N],ans=-INF;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	for(int i=1;i<=n-m+1;i++){
		for(int j=i+1;j<=n;j++){
			int sum=a[i];	
			for(int k=1;k<=m-1;k++){
				sum&=a[j+k-1];
			}
			ans=max(ans,sum);
		}
	}    
	cout<<ans;
	return 0;
}