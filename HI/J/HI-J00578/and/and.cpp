#include<bits/stdc++.h>
using namespace std;
long long a[200010];
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
int n,m;
cin>>n>>m;
long long ma=0;
for(int i=1;i<=n;i++){
	cin>>a[i];
	ma=max(ma,a[i]);		
}
if(m==1){
	cout<<ma;
	return 0;
}
if(m==2){
	long long ans=0;
		for(int i=1;i<n;i++){
		for(int j=i+1;j<=n;j++){
			if(a[i]&a[j]>=ans){
				ans=a[i]&a[j];
			
				
			}
		}
	}
	cout<<ans;
	return 0;
}
sort(a+1,a+1+n);
long long ans=a[n]&a[n-1];
for(int i=n-2;i>n-m;i--){
	ans=ans&a[i];
}
cout<<ans;
return 0;
} 
