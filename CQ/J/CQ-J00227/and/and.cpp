#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,ans;
int a[200005];

signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(m==1){
		for(int i=0;i<n;i++){
			ans=max(ans,a[i]);
		}
		cout<<ans;
		return 0;
	}if(m==n){
		ans=a[0];
		for(int i=1;i<n;i++){
			ans&=a[i];
		}cout<<ans;
		return 0;
	}
	if(m==n-1){
		ans=a[1];
		for(int i=2;i<n;i++){
			ans&=a[i];
		}
		for(int i=1;i<n;i++){
			int tmp=a[0];
			for(int j=1;j<n;j++){
				if(j!=i){
					tmp&=a[j];
				}
			}ans=max(ans,tmp);
		}cout<<ans;
		return 0;
	}if(m==2){
		for(int i=0;i<n;i++){
			for(int j=0;j<n;j++){
				if(j!=i){
					ans=max(ans,a[i]&a[j]);
				}
			}
		}cout<<ans;
		return 0;
	}
	return 0;
}

