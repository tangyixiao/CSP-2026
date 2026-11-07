#include<iostream>
using namespace std;char c[2000005]={};long long a[2000005]={};
int main(){
	
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	long long n,ans=0;
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		if(c[i]==c[i-1]){
			a[i-1]+=a[i];
			i--,n--;
		}
	} 
	for(int l=1,r=n;l<n;){
		if(c[l]==c[r]){
			if(a[l]<a[r]){
				a[r]-=a[l];l++;
			}else if(a[l]>a[r]){
				a[l]-=a[r];r--;
			}else{
				l++,r--;
			}
		}else{
			if(a[l]<a[r]){
				ans+=a[l];
				a[r]-=a[l];l++;
			}else if(a[l]>a[r]){
				ans+=a[r];
				a[l]-=a[r];r--;
			}else{
				ans+=a[l];				 
				l++,r--;
			}			
			
		}
	}
	cout<<ans;
	return 0;
} 
