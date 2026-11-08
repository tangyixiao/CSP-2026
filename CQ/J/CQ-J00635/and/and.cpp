#include<bits/stdc++.h>
using namespace std; 
long long n,m,a[200005],ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=0;i<n;i++){
		long long b;
		cin>>b;
		ans=max(ans,b);
	}
	cout<<ans;
	return 0;
}
