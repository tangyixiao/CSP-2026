#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m,a[200060],ans=-99999;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>a;
	}
	if(m==1){
		for(int i=1;i<=n;i++){
			if(a[i]>ans)ans=a[i];
		}
		cout<<ans;
	}
	else if(m==n){
		ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;
	}
	else if(m==2){
		long long p;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				p=a[i]&a[j];
				if(p>ans){
					ans=p;
				}
			}
		}
		cout<<ans;
	}
	return 0;
}
