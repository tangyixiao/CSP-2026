#include <bits/stdc++.h>
using namespace std;
long long a[200010];
char c[200010],kc;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	long long n,k=0;
	bool f;
	cin>>n;
	for(long long i=1;i<=n;i++){
		cin>>a[i]>>c[i];
	}
	long long ans=0;
	for(long long i=1,j=n;i<j;i++,j--){
		if(k){
			if(f){
				if(kc==c[i]){
					a[i]+=k;
					k=0;
				}else if(kc==c[j]){
					if(a[j]>=k){
						a[j]-=k;
						k=0;
					}else{
						k-=a[j];
						i--;
						continue;
					}
				}else{
					if(a[j]>=k){
						a[j]-=k;
						ans+=k;
						k=0;
					}else{
						k-=a[j];
						ans+=a[j];
						i--;
						continue;
					}
				}
			}else{
				if(kc==c[j]){
					a[j]+=k;
					k=0;
				}else if(kc==c[i]){
					if(a[i]>=k){
						a[i]-=k;
						k=0;
					}else{
						k-=a[i];
						j++;
						continue;
					}
				}else{
					if(a[i]>=k){
						a[i]-=k;
						ans+=k;
						k=0;
					}else{
						k-=a[i];
						ans+=a[i];
						j--;
						continue;
					}
				}
			}
		}
//------------------------------------------------------------------------------
		if(a[i]==a[j]){
			if(c[i]==c[j])
				continue;
			else
				ans+=a[i];
		}else{
			if(c[i]==c[j]){
				k=abs(c[i]-c[j]);
				kc=c[i];
				f=a[i]>a[j];
			}else{
				ans+=min(a[i],a[j]);
				k=abs(a[i]-a[j]);
				kc=((a[i]>a[j])?c[i]:c[j]);
				f=a[i]>a[j];
			}
		}
	}
	cout<<ans;
	return 0;
}
