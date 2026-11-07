#include <bits/stdc++.h>
using namespace std;
int maxn=-1;
long long j(int a){
	int ans=1;
	for(int i=1;i<=a;i++){
		ans*=i;
	}
	return ans;
}
int C(int n,int m){
	return (j(n))/(j(n-m)*j(m));
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[200010];
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	if(n<=2000){
		if(m==1){
			for(int i=0;i<n;i++){
				maxn=max(maxn,a[i]);
			}
			cout<<maxn;
			return 0;
		}else if(m==n){
			int ans=a[0];
			for(int i=1;i<n;i++){
				ans=ans&a[i];
			}
			cout<<ans;
			return 0;
		}else if(m==2){
			for(int i=0;i<n-1;i++){
				for(int j=i+1;j<n;j++){
					maxn=max(maxn,a[i]&a[j]);
				}
			}
			cout<<maxn;
			return 0;
		}else{
			cout<<0;
		}
	}else{
		sort(a,a+n);
		cout<<a[n-m];
	}
	return 0;
}