#include<bits/stdc++.h>
using namespace std;
int const maxn=1e6+10;
int n,m;
int a[maxn];
int main(){
	freopen ("and.in","r",stdin);
	freopen ("and.out","w",stdout);
	cin>>n>>m;
	for (int i=1;i<=n;i++){
		cin>>a[i];
	}
	if (m==n){
		int k=a[1];
		for (int i=1;i<=n;i++){
			k&=a[i];
		}
		cout<<k<<endl;
		return 0;
	}
	else if (m==1){
		int maxx=-1;
		for (int i=1;i<=n;i++){
			maxx=max(maxx,a[i]);
		}
		cout<<maxx<<endl;
		return 0;
	}
	else if (m==2){
		int maxa=-1;
		for (int i=1;i<=n;i++){
			for (int j=i+1;j<=n;j++){
				int q=a[i]&a[j];
				maxa=max(maxa,q);
			}
		}
		cout<<maxa<<endl;
		return 0;
	}
	else {
		int p;
		for (int i=n;i>=2;i--){
			p&=a[i];
		}
		cout<<p<<endl;
	}
	return 0;
}
