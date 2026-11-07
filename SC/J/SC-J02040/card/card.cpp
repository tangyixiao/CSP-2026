#include <bits/stdc++.h>
#define LL long long 
using namespace std;
LL n,m;
LL a[100000000],b[10000000],ans[100000000];
int main(){
	freopen("card.in","r",stdin);
	freopen("card.out","w",stdin);
	cin>>n>>m;

	for(LL i=1;i<=n;i++){
		cin>>a[i];
	}
	for(LL gg=1;gg<=n;gg++){
		for(LL k=gg;k<=n;k++){
			b[k]=a[k];
			for(LL i=k-1;i>0;i--){
				if(b[i]==b[k]){
					for(LL j=i;j<k;j++){
						b[j]=0;
					}
					break;
				}
			}
		for(LL g=1;g<=k;g++){
			if(b[g]!=0){
				ans[b[g]]++;
			}
		}
		
		}
		for(LL i=1;i<=n;i++) b[i]=0;
	}
	for(LL i=1;i<=m;i++) cout<<ans[i]/2<<" "; 
	return 0;
} 