#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a[1000005],b[1000005],sum=0,x,y;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	if(m==1){
		sort(a+1,a+1+n);
		cout<<a[n];
		return 0;
	}
	else if(m==2){
		cout<<a[n];
	}
	cout<<a[n];
	return 0;
}
