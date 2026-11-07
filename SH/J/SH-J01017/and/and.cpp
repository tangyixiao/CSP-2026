#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m,n,mmaxx=-10;
	cin>>n>>m;
	int a[200005];
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mmaxx=max(a[i],mmaxx);
	}
	if(m==1) cout<<mmaxx;
	if(m==n){
		long long p=a[1];;
		for(int i=2;i<=n;i++){
			p=p&a[i];
		}
		cout<<p;
	}
	if(m==2){
		mmaxx=-10; 
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				mmaxx=max(mmaxx,a[i]&a[j]);
			}
		}
		cout<<mmaxx;
	}
	return 0;
}
