#include<bits/stdc++.h>
using namespace std;
int a[200009];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m;
	cin>>n>>m;
    for(int i=1;i<=n;i++)cin>>a[i];
    if(m==n){
    	int ans=a[1];
    	for(int i=2;i<=n;i++)ans=ans&a[i];
		cout<<ans; 
		return 0;
	}
    if(m==1){
		int ans=0;
		for(int i=1;i<=n;i++)if(a[i]>ans)ans=a[i];
		cout<<ans;
		return 0;
	}
	if(m==2){
		int ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				if(a[i]&a[j]>ans){
					ans=a[i]&a[j]; 
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		int ans=0,ert=0;
		for(int i=1;i<=n;i++){
			ert=a[i+1];
			for(int j=1;j<=n;j++){
				if(j!=i)ert=ert&a[j];
			}
			if(ans<ert)ans=ert;
			ert=0;
		}
		cout<<ans;
		return 0;
	}
	cout<<"0";
	return 0;
}
