#include<bits/stdc++.h>
using namespace std;
int n,m,a[200005],ans;
int main(){
	freopen(stdin,"and.in",r);
	freopen(stdout,"and.out",w);
	cin.tie(0);
	cout.tie(0);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
	}
	sort(a,a+n);
	ans=a[n-1];
	for(int i=n-2;i>n-m-1;i--){
		ans=ans&a[i];
	}
	cout<<ans;
	return 0;
}
