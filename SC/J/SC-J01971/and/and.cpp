#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	int a[200005];
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	int cnt=0;
	for(int i=n;i>=n-m+1;i--){
		int tr=a[n]&a[n-1];
		cnt=tr;
		cnt&=a[i];		
	}
	cout<<cnt;
	return 0;
}


  
