#include<bits/stdc++.h>
using namespace std;
long long a[1000000];
char c[1000000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,ans=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long l=1,r=n;
	while(l<r){
		int k=c[l],h=c[r];
		
		if(a[l]>a[r]){
			if(k!=h){
				ans+=a[r];
				
			}
			a[l]-=a[r];
			a[r]-=a[r];
			r--;
		}else if(a[l]<a[r]){
			if(k!=h){
				ans+=a[l];
			}
			a[r]-=a[l];
			a[l]-=a[l];
			l++;
		}else{
			if(k!=h){
				ans+=a[r];
			}
			a[l]=0;
			a[r]=0;
			l++;
			r--;
		}
	}cout<<ans;
	
	
	
	return 0;
}