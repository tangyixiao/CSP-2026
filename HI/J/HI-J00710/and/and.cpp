#include<bits/stdc++.h>
using namespace std;
long long n,m,ans=-1,a[200009];
int main(){
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
	}
	if(m==2){
		for(int i=0;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
	}
	if(m==3){
		for(int i=0;i<n-2;i++){
			for(int j=i+1;j<n-1;j++){
				for(int k=j+1;k<n;k++){
					ans=max(ans,a[i]&a[j]&a[k]);
				}
			}
		}
	}
	cout<<ans;
	return 0;
} 
