#include<bits/stdc++.h>
#define ll long long
using namespace std;
ll n,a[10000001],cnt=0,f=0;
char s1[10000001],k1;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	ll k;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>s1[i]; 
	}
	ll l=1,r=n;
	while(l<=r){
		if(l==1){
			if(s1[l]!=s1[r]){
				cnt+=min(a[l],a[r]);
				if(a[l]>=a[r]){
					k=a[l]-a[r];
					k1=s1[l];
					f=1;
				}else{
					k=a[r]-a[l];
					k1=s1[r];
					f=2;
				}		
			}else{
				if(a[l]>=a[r]){
					k=a[l]-a[r];
					k1=s1[l];
					f=1;
				}else{
					k=a[r]-a[l];
					k1=s1[r];
					f=2;
				}				
			}
		}else{
			if(f==1){
				if(k>a[r]){
					if(k1==a[r]){
						k-=a[r];
						r--;
						continue;
					} 
					else{
						cnt+=a[r];
						k-=a[r];
						r--;
						continue;
					}
				}else{
					if(k1==a[r]) a[r]-=k;
					else{
						cnt+=k;
						a[r]-=k;
					}
				}
			}else if(f==2){
				if(k>a[l]){
					if(k1==a[l]){
						k-=a[l];
						l++;
						continue;
					}else{
						cnt+=a[l];
						k-=a[l];
						l++;
						continue;
					}
				}else{
					if(k1==a[l]) a[l]-=k;
					else{
						cnt+=k;
						a[l]-=k;
					}
				}				
			}
			if(s1[l]!=s1[r]){
				cnt+=min(a[l],a[r]);
				if(a[l]>=a[r]){
				k=a[l]-a[r];
				k1=s1[l];	
				}else{
					k=a[r]-a[l];
					k1=s1[r];
				}		
			}else{
				if(a[l]>=a[r]){
					k=a[l]-a[r];
					k1=s1[l];
				}else{
					k=a[r]-a[l];
					k1=s1[r];
				}				
			}			
		}
		l++;
		r--;
	} 
	cout<<cnt;

	return 0;
}

