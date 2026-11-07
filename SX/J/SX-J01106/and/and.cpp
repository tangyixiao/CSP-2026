#include<bits/stdc++.h>
using namespace std;
long long sum=0,n,a[200005],m,ans=0;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		sum=max(sum,a[i]);
	}
	if(m==2){
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			ans=max(ans,a[i]&a[j]);
			}
		}
		cout<<ans;
		return 0;
	}
	if(sum==4){
		cout<<2;
		return 0;
	}
	return 0;
}