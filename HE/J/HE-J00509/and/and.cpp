#include<bits/stdc++.h>
using namespace std;
long long n,m,a[200005],ans=-1;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	sort(a+1,a+n+1);
	if(m==1){		//≤‚ ‘µ„6 
		ans=a[n];
	}else if(m==2){	//≤‚ ‘µ„8~10 
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
	}else if(m==n){	//≤‚ ‘µ„7 
		for(int i=1;i<=n;i++){
			ans=ans&a[i];
		}
	}else{			//≤‚ ‘µ„13 
		ans=a[n-m+1];
	}
	
	cout<<ans; 
	

	

} 
