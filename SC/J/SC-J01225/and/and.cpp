#include<bits/stdc++.h>
using namespace std;
long long a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	
	if(m==1){
		long long mx;
		for(int i=1;i<=n;i++){
			mx=max(mx,a[i]);
		}
		cout<<mx;
	}
	if(m==n-1){
		long long h=a[1],mx=0;
		for(int i=1;i<=n;i++){
			h=h&a[i];
		}
		for(int i=1;i<=n;i++){
			mx=max(mx,a[i]&h);
		}
		cout<<mx;
	}
	if(m==2){
		long long mx=0;
		for(int i=1;i<=n;i++){
			for(int j=i;j<=n;j++){
				mx=max(mx,a[i]&a[j]); 
			}
		}
		cout<<mx;
	}else{
		sort(a+1,a+n+1);
		int ans=a[n];
		for(int i=n;i>=n-m+1;i--){
			ans=ans&a[i];
		}
		cout<<ans;
	}
	return 0;
}