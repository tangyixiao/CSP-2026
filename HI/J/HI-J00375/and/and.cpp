#include<bits/stdc++.h>
using namespace std;
int n=0,m=0,a[200050]={0};
int main(){
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	} 
	sort(a+1,a+n+1);
	cout<<a[n-m+1];
	
	return 0;
}
