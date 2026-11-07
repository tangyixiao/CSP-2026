#include <bits/stdc++.h>
using namespace std;
const int N=200004;
int n,m,j,l,ans,a[N];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	l=1,j=30;
	for(;j>=0;j--){
		sort(a+l,a+n+1);
		while(!(a[n]&(1<<j))) j--;
		if(a[n-m+1]&(1<<j)){
			ans|=(1<<j);
			while(!(a[l]&(1<<j))) l++;
		}
		else{
			for(int i=n;i-l;i--){
				if(a[i]<(1<<j)) break;
				a[i]^=(1<<j);
			} 
		} 
	}
	cout<<ans<<"\n";
	return 0;
}
