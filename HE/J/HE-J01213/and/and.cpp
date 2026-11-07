#include<bits/stdc++.h>
#define int long long
using namespace std;
int n,a[200005],m,ans=-1,sum,sum1;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio();
	cin.tie(nullptr);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
			cin>>a[i];
			if(a[i]&1) sum++;
			
	}
	sum1=a[1];
	for(int i=2;i<=n;i++)
	{
		sum1&=a[i];
	}
	sort(a+1,a+1+n);
    if(sum==n){
		cout<<1;
		return 0;
	}
    if(m==n){
    	cout<<sum1;
    	return 0;
	}
	if(m==1){
		cout<<a[n];
		return 0;
	}
	for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(i!=j){
				ans=max(ans,a[i]&a[j]);
			}
		}
	}
    
	

	cout<<ans;
}
