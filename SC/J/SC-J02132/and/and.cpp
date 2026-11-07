#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[200005],b[200005],ans;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	for(int i=30;i>=0;i--){
		int cnt=0;
		for(int j=1;j<=n;j++){
			if(b[j]){
				continue;
			}
			if(a[j]&(1<<i)){
				cnt++;
			}
		}
		if(cnt>=m){
			ans+=(1<<i);
			for(int j=1;j<=n;j++){
				if((a[j]&(1<<i))==0){
					b[j]=1;
				}
			}
		}
	}
	cout<<ans;
	return 0;
} 