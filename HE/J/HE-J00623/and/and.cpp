#include<bits/stdc++.h>
#include<cstring>
#include<string>
using namespace std;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m,a[30001],maxl=-2147483648,ans=-2147483648;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		maxl=max(maxl,a[i]);
	}
	if(m==1){
		cout<<maxl;
		return 0;
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(i!=j){
				ans=max(ans,(a[i]&a[j]));
			}
		}
	}	
	cout<<ans;
	return 0;
}
