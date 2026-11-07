#include<bits/stdc++.h>
using namespace std;
long long n,a[200005],len,ans,u;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	long long i=1,j=n,l=0,r=len+1,midl=len/2,midr=len-midl+1;
	while(l<midl&&r>midr){
		if(l+a[i]<=midl){
			l+=a[i];
			long long k=len-l+1;
			while(r>k){
				if(r-a[j]>=k){
					r-=a[j];
					if(c[j]!=c[i]){
						ans+=a[j];
					}
					j--;
				}
				else{
					if(c[j]!=c[i]){
						ans+=r-k;
					}
					a[j]-=r-k;
					r=k;
				}
			}
			i++;
		}
		else{
			l=midl;
			long long k=midr;
			while(r>k){
				if(r-a[j]>=k){
					r-=a[j];
					if(c[j]!=c[i]){
						ans+=a[j];
					}
					j--;
				}
				else{
					if(c[j]!=c[i]){
						ans+=r-k;
					}
					a[j]-=r-k;
					r=k;
					
				}
			}
			i++;
		}
	} 
	cout<<ans;
	return 0;
}
