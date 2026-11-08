#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[10000010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans=ans&a[i];
		}
		cout<<ans;return 0;
	}
	if(m==1){
		int ans=0;
		for(int i=1;i<=n;i++){
			if(ans<=a[i])ans=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		int ans=0,mmax=INT_MIN;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=a[i]&a[j];
				if(ans>=mmax)mmax=ans;
			}
		}
		cout<<mmax;
		return 0;
	}
	return 0;
}
