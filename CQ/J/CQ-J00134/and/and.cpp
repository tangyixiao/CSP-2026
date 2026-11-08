#include<bits/stdc++.h>
using namespace std;
int n,m;
long long ans=0,p=0;
long long a[2005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		p=max(p,a[i]);
	}
	if(n<=2000&&m==1){
		for(int i=1;i<=n;i++){
			ans=max(a[i],ans);
		}
		cout<<ans;
		cout<<endl;
		return 0;
	}
	if(n<=2000&&m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(a[i]&a[j],ans);
			}
		}
		cout<<ans;
		cout<<endl;
		return 0;
	}
	if(n<=2000&&m==3){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				for(int k=j+1;k<=n;k++){
					ans=max(a[i]&a[j]&a[k],ans);
				}
			}
		}
		cout<<ans;
		cout<<endl;
		return 0;
	}
	cout<<p;
	cout<<endl;
	return 0;
}

