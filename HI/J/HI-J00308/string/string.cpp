#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll ans,len;
int n;
const int N=2e5+10;
ll a[N];
char c[N];
ll l,r,r1,l1=0,len1=0,len2,len3;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
    for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	r1=len,l=1,r=n;
	while(l1<len/2&&l<=n){
		len3=0;
		len1=min(len/2-l1,a[l]);
		l1=min(l1+a[l],len/2);
	//	cout<<len1<<" "<<l1<<" "<<ans<<"\n";
		while(r1>len/2&&len3<len1&&r>0){
			if(len2!=0){
				if(len3+len2<=len1){
					len3+=len2;
					 if(c[r]!=c[l]) ans+=len2;
					r--;
					len2=0;
				}
				else{
					len3=len1;
					len2-=len1;
					 if(c[r]!=c[l]) ans+=len3;
					break;
				}
			
			}
			if(len3+a[r]<=len1){
				len3+=a[r];
				 if(c[r]!=c[l]) ans+=a[r];
				r--;
			}
			else{
			 
			  if(c[r]!=c[l]) ans+=len1-len3;
			  len2+=a[r]-(len1-len3);
			   len3=len1;
			  	
			}}
		l++;}
		cout<<ans;

		return 0;
			
} 
