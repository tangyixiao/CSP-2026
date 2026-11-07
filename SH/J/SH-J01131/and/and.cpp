#include<bits/stdc++.h>
using namespace std;
long long a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	long long n,m;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	if(m==1){
		cout<<a[n-1];
		return 0;
	}
	if(m==n){
		long long ans=a[0];
		for(int i=1;i<n;i++){
			ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		int ans1=0;
		for(int i=0;i<n;i++){
			for(int j=i+1;j<n;j++){
				if(ans1<=(a[i]&a[j])){
					ans1=(a[i]&a[j]);
				}
			}
		}
		cout<<ans1;
		return 0;
	}
	if(m==n-1){
		long long ans2=0,w=a[1];
		for(int i=1;i<n;i++){
			long long q=a[0];
			for(int j=1;j<n;j++){
				if(j!=i){
					q&=a[j];
				}
			}
			if(q>=ans2){
				ans2=q;
			}
		}
		for(int i=2;i<n;i++){
			w&=a[i];
		}
		if(w>=ans2){
			ans2=w;
		}
		cout<<ans2;
	}
}
