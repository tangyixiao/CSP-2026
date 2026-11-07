#include <bits/stdc++.h>
using namespace std;
int m,n;
int a[100005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int ans=0;
	if(m==1){
		for(int j=1;j<=n;j++){
			int nd;
			nd=a[j];
			if(nd>ans){
				ans=nd;
			}
		}
	}
	if(m==2){
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				int nd;
				nd=a[i]&a[j];
				if(nd>ans){
				ans=nd;
				}
			}
		}
	}
	if(m==3){
		for(int k=1;k<=n;k++){
			for(int i=k+1;i<=n;i++){
				for(int j=i+1;j<=n;j++){
					int nd;
					nd=a[i]&a[j]&a[k];
					if(nd>ans){
					ans=nd;
					}
				}
			}
		}
	}
	if(m==n){
		int w=a[1];
		for(int i=1;i<=n;i++){
			w=w&a[i];
		}
		ans=w;
	}
	cout <<ans;
	return 0;
}