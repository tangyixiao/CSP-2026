#include<bits/stdc++.h>
using namespace std;

long long n,a[200010],sum=1,ans,pd;
char z[200010];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
 
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>a[i]>>z[i];
	}
	
	for(int i=1;i<=n;i++){
		if(a[i]==1){
			pd=pd+1;
		}
	}
	
	if(n%2==0)
	for(int i=1;i<=n/2;i++){
		if(z[i]!=z[n-i+1] && a[n-i+1]!=1){
			ans+=a[n-i+1];
		}
	}
	else
	for(int i=1;i<=n;i++){
		if(z[i]!=z[n-i+1] && a[n-i+1]!=1){
			ans+=a[n-i+1];
		}
	}
	
	if(pd>=2){
		ans+=pd-1;
	}
	
	cout<<ans;
	return 0;
}
