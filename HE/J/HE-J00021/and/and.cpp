#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200010],ans,maxx=INT_MIN;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				ans=a[i]&a[j];
				maxx=max(maxx,ans);
			}
		}
	}else if(m==3){
		for(int i=1;i<n-1;i++){
			for(int j=i+1;j<n;j++){
				for(int k=j+1;k<=n;k++){
					ans=a[i]&a[j]&a[k];
					maxx=max(maxx,ans);
				}
			}
		}
	}else if(m==n){
		ans=a[1]&a[2];
		for(int i=3;i<=n;i++){
			ans&=a[i];
		}
		maxx=ans;
	}
	cout<<maxx;
	return 0;
}
