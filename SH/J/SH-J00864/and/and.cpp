#include<bits/stdc++.h>
using namespace std;
int n,m,a[10001],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m; 
	for(int i=0;i<n;++i){
		cin>>a[i];
	}
	sort(a,a+n);
	if(m==1){
		cout<<a[n-1];
		return 0;
	}
	ans=a[0];
	for(int i=0;i<n;++i){
		ans&=a[i];
	}
	cout<<ans;
	return 0;
}

