#include <bits/stdc++.h>
using namespace std;
long long n,m,a[200005],maxn,ans;
bool cmp(long long x,long long y){
	return x>y;
}
bool check(){
	bool f=0;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(pow(2,j)==a[i]+1) f=1;
		}
		if(f==0) return 0;
	}
	return 1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxn=max(maxn,a[i]);
	}
	if(m==1){
		cout<<maxn;
		return 0;
	}
	maxn=0;
	if(m==n){
		for(int i=1;i<n;i++){
			ans=a[i]&a[i+1];
		}
		cout<<ans;
		return 0;
	}
	if(m==2){
		for(int i=1;i<n;i++){
			for(int j=i+1;j<=n;j++){
				maxn=max(maxn,a[i]&a[j]);
			}
		}
		cout<<maxn;
		return 0;
	}
	maxn=0,ans=0;
	if(check()){
		sort(a+1,a+n+1,cmp);
		cout<<a[m];
		return 0;
	}
	return 0;
}
