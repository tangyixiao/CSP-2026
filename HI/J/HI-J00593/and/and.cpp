#include <bits/stdc++.h>
using namespace std;
long long n,m,a[1000001],ans;
int main(){
	freopen("and.in","r",stdin);
	freopen ("and.out","w",stdout);
	
	cin >> n >> m;
	for(int i=1;i<=n;i++){
		cin >> a[i] ;
	}
	for(int i=1;i<=n;i++){
		int x= a[i] || a[i+1];
		int y= a[i] || a[i+2];
		ans =max(x,y);
	}
	cout << ans;
	return 0 ;
}
