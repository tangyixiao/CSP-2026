#include<bits/stdc++.h> 
using namespace std;
int n,m,ans;
int a[200005];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	for(int i=n-1;i>n-m;i--){
		
		ans=min(a[i+1],a[i]);
	}
	cout<<ans;
	return 0;
	
}
