#include<bits/stdc++.h>
using namespace std;
#define int long long
const int N=2e5+3;
int a[N],A1[N],A2[N];
int n,len,len1,len2,nn,mm;
char c[N],C1[N],C2[N];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i]>>c[i];
		len+=a[i];
	}
	for(int i=1;i<=n;i++){
		if(len1+a[i]<len/2) {
			len1+=a[i];
			A1[i]=a[i];
			C1[i]=c[i];
		}
		else{
			A1[i]=len/2-len1;
			C1[i]=c[i];
			nn=i;
			break;
		}
	}
	for(int i=n;i>=1;i--){
		if(len2+a[i]<len/2) {
			len2+=a[i];
			A2[n+1-i]=a[i];
			C2[n+1-i]=c[i];
		}
		else{
			A2[n+1-i]=len/2-len2;
			C2[n+1-i]=c[i];
			mm=n+1-i;
			break;
		}
	}
	int i=1,j=1,sum1=0,sum2=0,ans=0;
	while(i<=nn&&j<=mm){
		if(sum1>=sum2){
			if(C1[i-1]!=C2[j]) ans+=min(sum1-sum2,A2[j]);
			sum2+=A2[j]; j++;
		}
		else{
			if(C1[i]!=C2[j-1]) ans+=min(sum2-sum1,A1[i]); 
			sum1+=A1[i]; i++;
		}
	} 
	while(i<=nn) {ans+=A1[i]*(C1[i]!=C2[mm]);i++;}
	while(j<=mm) {ans+=A2[j]*(C1[nn]!=C2[j]);j++;}
	cout<<ans;
}
