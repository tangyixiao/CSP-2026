#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200005];
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i];
	}
	if(m==1){
		int maxa=0;
		for(int i=1;i<=n;i++){
			if(a[i]>maxa) maxa=a[i];
		}
		cout << maxa;
	}
	if(m==n){
		int ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		cout << ans;
	}
	if(m==2){
		int maxa=0;
		for(int i=1;i<=n;i++){
			for(int j=1;j<=n;j++){
				if(i==j) continue;
				if(a[i]&a[j]>maxa) maxa=a[i]&a[j];
			}
		}
		cout << maxa;
	}
	return 0;
}
