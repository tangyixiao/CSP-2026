#include<bits/stdc++.h> 
using namespace std;
int n,m,a[20005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	int sum=1;
	for(int i=1;i<=n-1;i++){
		sum*=2;
	}
	cout<<sum;
	return 0;
}
