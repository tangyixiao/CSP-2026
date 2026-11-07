#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],maxx=-1,t[5],ans=1;
bool cm(long long n){
	while(n!=0){
		if(n%2!=0){
			return 0;
		}else{
			n/=2;
		}
	}
	return 1;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(a[i]<4){
			t[a[i]]++;
		}
	}
	sort(a+1,a+n+1);
	if(m==1){
		cout<<a[n];
		return 0;
	}else if(m==2){
		cout<<(a[n]&a[n-1]);
		return 0;
	}else if(m==n){
		for(int i=1;i<=n;i++){
			ans=(ans&a[i]);
		}
		cout<<ans;
		return 0;
	}
	if(a[n]<4){
		if(m<=t[3]){
			cout<<3;
			return 0;
		}else if(m-t[3]<=t[2]){
			cout<<2;
			return 0;
		}else {
			cout<<0;
			return 0;
		}
	}
	if(cm(a[n]+1)){
		cout<<a[n-m];
		return 0;
	}
	if(cm(n)){
		cout<<a[n-m];
		return 0;
	}
	ans=1;
	for(long long i=n;i>=n-m;i++){
		ans=(ans&a[i]);
	}
	cout<<ans;
	return 0;
}