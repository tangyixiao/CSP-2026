#include <bits/stdc++.h>
#define int long long
using namespace std;
const int N=2*1e5+5;
int a[N];
signed main(){
	freopen("and","r",stdin);
	freopen("and","w",stdout);
	int n,m,max=0;
	cin>>n>>m;
	for(int i=0;i<n;i++){
		cin>>a[i];
		if(a[i]>max) max=a[i];
	}
	if(m==1) cout<<max;
	else if(m==n){
		for(int i=1;i<n;i++){
			a[0]=a[0]&a[i];
		}
		cout<<a[0];
	}
	else cout<<max/2;
	return 0;
} 
