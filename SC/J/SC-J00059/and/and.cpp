#include<bits/stdc++.h>
using namespace std;
long long n,m;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long ans=(a[1]&a[2]);
	if(m==1){
		ans=-1;
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
	}
	else if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
	}
	else if(m==3){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int q=j+1;q<=n;q++){
					ans=max(ans,(a[i]&a[j])&a[q]);
				}
			}
		}
	}
	else ans=a[n-m];
	cout<<ans;
	return 0;
}