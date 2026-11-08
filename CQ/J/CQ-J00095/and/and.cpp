#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[200005],biao[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	ll ans=0;
	for(int j=30;j>=0;j--){
		int po=0;
		for(int i=1;i<=n;i++){
			if(biao[i]) continue;
			if((1<<j)&a[i]){
				po++;
			}
		}
		if(po>=m){
			ans+=(1<<j);
			for(int i=1;i<=n;i++){
				if(!((1<<j)&a[i])){
					biao[i]=1;
				}
			}
		}
	}
	cout<<ans;
}
