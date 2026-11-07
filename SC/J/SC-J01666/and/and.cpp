#include <bits/stdc++.h>
using namespace std;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	if(m==1){
		int maxn=0;
		for(int i=1;i<=n;i++) maxn=max(maxn,a[i]);
		cout<<maxn;
		return 0;
	}
	else if(m==n){
		int k=a[1];
		for(int i=2;i<=n;i++) k=k&a[i];
		cout<<k;
		return 0;
	}
	else if(m==2){
		int maxn=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(j!=i) maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn;
		return 0;
	}
	else if(m==n-1){
		int k=a[1];
		for(int i=2;i<=n;i++) k=k&a[i];
		int c=k&a[n];
		cout<<c;
		return 0;
	}
	int flag=0;
	for(int i=1;i<=n;i++){
		if(a[i]!=i-1) flag=1;
	}
	if(flag==0) {
		int k=a[n];
		for(int i=n-1;i>=n-m;i--)k=k&a[i];
		cout<<k;
		return 0;
	}
	else if(m==3){
		int maxn=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				for(int k=1;k<=n;k++){
					int c=a[i]&a[j]&a[k];
					if(i!=j&&j!=k&&i!=k) maxn=max(maxn,c);
				}
				
			}
		}
		cout<<maxn;
	}
	return 0;
}