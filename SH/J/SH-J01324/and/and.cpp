#include<bits/stdc++.h>
using namespace std;
int a[200007],m,n,mx,ans,x;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin >> n >> m;
	for(int i=1; i<=n; i++) cin >> a[i];
	for(int i=1; i<=n; i++) mx=max(mx,a[i]);
	ans=mx;mx=0;
	for(int i=1; i<m; i++){
	    for(int i=1; i<=n; i++){
	    	if(ans%a[i]>mx){
	    		mx=ans%a[i];
	    		x=i;
			}
		} 
		ans = ans&a[x];
		mx=0;					
	}
	cout << ans;
	return 0;
}
