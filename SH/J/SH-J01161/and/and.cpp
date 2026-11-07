#include <bits/stdc++.h>
using namespace std;
int n,m;
const int maxn=2e5+5;
int a[maxn];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout); 
	cin>>n>>m;
	//cout<<(262144 & 524288)<<endl;
	for(int i=0;i<n;i++) cin>>a[i];
	sort(a,a+n);
	//for(int i=0;i<n;i++) cout<<a[i]<<' ';
	int res=0; 
	//cout<<ans<<endl;
	for(int i=n;i>0;i--){
		int ans=a[i-1];
		if(i-m-1<0) break;
		for(int j=i-2;j>i-m-1;j--){
			ans=(ans & a[j]);
			//cout<<a[i]<<' ';
			//cout<<ans<<endl;
		}
		res=max(res,ans);
		if(ans>=a[i-m-2]) break;
		
	}
	cout<<res;
	return 0; 
}
