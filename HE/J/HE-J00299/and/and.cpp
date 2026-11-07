#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200010],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ans=a[i]&a[i+1];
		
	}
	cout<<ans;
	return 0;
} 
