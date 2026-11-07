#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll a[200005];
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	ll ans=0,last=0;
	for(int i=1;i<=n/2;i++){
		if(last==0){
		    int j=n-i+1;
		    if(c[i]!=c[j]){
	    		ans+=min(a[i],a[j]);
		    }
		    last=a[i]-a[j];
	    }else if(last>0){
	    	int j=n-i+1;
	    	if(c[i-1]!=c[j]){
	    		ans+=min(last,a[j]);
			}
	    	last=last-a[j];
		}else{
			int j=n-i+2;
			if(c[i]!=c[j]){
				ans+=min(last,a[j]);
			}
			last=last-a[j];
		}
	}
	if(n%2==1 && last!=0){
		if(last>0){
			int i=n/2+1;
			int j=n-i+1;
			if(c[i-1]!=c[j]){
				ans+=min(last,a[j]);
			}
		}else{
			int i=n/2+1;
			int j=n-i+2;
			if(c[i]!=c[j]){
				ans+=min(last,a[j]);
			}
		}
	}
	cout<<ans;
	return 0;
}
