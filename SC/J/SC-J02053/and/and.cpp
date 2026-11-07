#include <bits/stdc++.h>
using namespace std;
#define int long long
int a[200005];
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
    int n,m,mx=-1;
    cin>>n>>m;
    for(int i=1;i<=n;i++){
    	cin>>a[i];
    	mx=max(mx,a[i]);
    }
    if(m==1){
	    cout<<mx;
	    return 0;
	}
    if(m==n){
    	int ans=a[1];
    	for(int i=2;i<=n;i++){
    		ans&=a[i];
		}
		cout<<ans;
		return 0;
	}
    if(m==2){
    	int ans=-1;
    	for(int i=1;i<=n;i++){
    		for(int j=1;j<=n;j++){
    			if(i!=j){
    				int ans1=a[i]&a[j];
    				ans=max(ans1,ans);
				}
			}
		}
		cout<<ans;
		return 0;
	}
	if(m==n-1){
		int ans=-1,k,ans1;
		for(int i=1;i<=n;i++){
			if(i!=n){
				k=n,ans1=a[n];
			}else k=1,ans1=a[1];
			for(int j=1;j<=n;j++){
				if(i!=j&&j!=k)ans1&=a[j];
			}
			ans=max(ans,ans1);
		}
		cout<<ans;
		return 0;
	}
	cout<<mx;
	return 0;
}