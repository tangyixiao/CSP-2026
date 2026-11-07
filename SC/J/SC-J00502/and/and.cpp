#include<bits/stdc++.h>
using namespace std;
int a[200005];
bool check(int x){
	int a=x+1;
	while(a>1){
		int c=a;
		a/=2;
		if(c!=a*2){
			return 1;
		}
	}
	return 0;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int maxn=0,u=0;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
		if(check(a[i])){
			u=1;
		}
	}
	if(m==1){
		cout<<maxn;
		return 0;
	}
	if(m==2){
		int maxn=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn;
		return 0;
	}
	if(u==0){
		sort(a+1,a+n+1);
		cout<<a[n-m+1];
		return 0;
	}
	sort(a+1,a+n+1);
	int ans=a[n];
	for(int i=n-1;i>=n-m+1;i--){
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}