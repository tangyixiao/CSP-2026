#include<bits/stdc++.h>
using namespace std;
int n,m;
int a[200001];
int main(){
	cin>>n>>m;
	for(long long i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	long long t = 1,ans=a[n-1];
	for(int i=n-1;t<=m;i--){
		t++;
		ans = a[i]&ans;
	}
	cout<<ans;
}
