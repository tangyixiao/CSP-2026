#include <bits/stdc++.h>
using namespace std;
#define Ios ios_base
const int YJS=2e5;
long long n,m,a[YJS];
int main(){
	Ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
//	#define 思路 可以发现，m等于几就会有m层循环，每一个循环都不难，但怎么让循环自动变成m个呢 
//打表吧，为了没有眼泪的明天 
//憧憬成为特判大师 
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
	}
	long long ans=INT_MIN;
	if(m==2){
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			ans=max(ans,(a[i]&a[j]));
		}
	}
	}else if(m==n){ 
		ans=a[1];
		for(int i=2;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans&=(a[i]&a[j]);
			}
		}
	}else if(m==1){
		for(int i=1;i<=n;i++){
			ans=max(ans,a[i]);
		}
	}else if(m==3){
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			for(int k=j+1;k<=n;k++){
				ans= max(ans,(a[i]&a[j]&a[k]));
			}
			}
		}
	}else if(m==4){
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			for(int k=j+1;k<=n;k++){
				for(int ii=k+1;ii<=n;ii++)
				ans= max(ans,(a[i]&a[j]&a[k]&a[ii]));
			}
		}
		}
	}else if(m==5){
		for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			for(int k=j+1;k<=n;k++){
				for(int ii=k+1;ii<=n;ii++)
				   for(int ij=ii+1;ij<=n;ij++)
				ans= max(ans,(a[i]&a[j]&a[k]&a[ii]&a[ij]));
			}
			}
		}
	}else if(m==6){
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			for(int k=j+1;k<=n;k++){
				for(int ii=k+1;ii<=n;ii++)
				   for(int ij=ii+1;ij<=n;ij++)
				      for(int ik=ij+1;ik<=n;ik++)
				ans= max(ans,(a[i]&a[j]&a[k]&a[ii]&a[ij]&a[ik]));
			}
			}
		}
	}else if(m==7){
	for(int i=1;i<=n;i++){
		for(int j=i+1;j<=n;j++){
			for(int k=j+1;k<=n;k++){
				for(int ii=k+1;ii<=n;ii++)
				   for(int ij=ii+1;ij<=n;ij++)
				   for(int ik=ij+1;ik<=n;ik++)
				   for(int ioi=ik+1;ioi<=n;ioi++)
				ans= max(ans,(a[i]&a[j]&a[k]&a[ii]&a[ij]&a[ioi]));
			}
			}
		}
	
	}else{
		long long kskbl=0;
		for(int i=1;i<=n;i++){
			kskbl=max(kskbl,a[i]);
		}
		sort(a+1,a+n+1);
		ans=kskbl&a[n-1];
	}
	cout<<ans;
	return 0;
}//我会好好骗分的，lhy 
//再见了 lhy 
