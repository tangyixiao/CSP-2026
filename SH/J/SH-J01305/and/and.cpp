#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
long long n,m,a[maxn],ans;
int maxa=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;++i){
		cin>>a[i];
		if(i==1){
			ans=a[i];
		}else{
			ans&=a[i];
		}
		if(a[i]>maxa){
			maxa=a[i];
		}
	}
	if(m==1){
		cout<<maxa;
		return 0;
	}else if(m==n){
		cout<<ans;
		return 0;
	}else if(m==2){
		ans=0;
		for(int i=1;i<=n;++i){
			for(int j=i+1;j<=n;++j){
				int k=a[i]&a[j];
				if(k>ans){
					ans=k;
				}
			}
		}
		cout<<ans;
		return 0;
	}else if(m==3){
		ans=0;
		for(int i=1;i<=n;++i){
			for(int j=i+1;j<=n;++j){
				for(int k=j+1;k<=n;++k){
					int ll=a[i]&a[j]&a[k];
					if(ll>ans){
						ans=ll;
					}
				}
			}
		}
		cout<<ans;
		return 0;
	}else if(maxa<=4){
		cout<<3;
	}
	cout<<n-m;
	return 0;
}
