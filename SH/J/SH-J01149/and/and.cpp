#include<bits/stdc++.h>
using namespace std;
long long n,a[200100],m,v[200100],maxv=-10;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxv=max(maxv,a[i]);
	}
	if(m==1){
		cout<<maxv;
		return 0;
	}
	sort(a+1,a+n+1,greater<int>());
	v[0]=a[1];
	for(int i=1;i<=n;i++){
		v[i]=v[i-1]&a[i];
	}
	cout<<v[m];
	return 0;
}
