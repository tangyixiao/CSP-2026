#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll n,a[200400],ans,pop,l,r,t,out;
char s[204000];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		ans+=a[i];
		scanf("%s",&s[i]);
	}
	ans/=2;l=n;
	for(int i=1;i<=n;i++){
		pop+=a[i];
		if(pop>ans){
			r=ans-(pop-a[i]);
		}
		else{
			r=a[i];
		}
		for(int j=l;j>=1;j--){
			if(s[j]==s[i]){
				if(r>=a[j]){
					r-=a[j];
					l=l-1;
				//	out+=a[j];
				}
				else{
					a[j]-=r;
					r=0;
				//	out+=r;
				}
			}
			else{
				if(r>=a[j]){
					r-=a[j];
					l=l-1;
					out+=a[j];
				}
				else{
					a[j]-=r;
				
					out+=r;	r=0;
				
				}
			}
			if(r<=0){
				break;
			}
		}
if(pop>=ans){
	break;
}
	}
	cout<<out;
	return 0;
}
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother
// fuck ccf‘s mother