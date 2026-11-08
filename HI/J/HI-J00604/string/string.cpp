#include<bits/stdc++.h>
using namespace std;

int main() {
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n,a[200005],sum=0;
	long long ans=0;
	char c[200005];
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%d",&a[i]);getchar();
		scanf("%c",&c[i]);
		sum+=a[i];
	}
	int i=1,j=n,now=0,tai=0,taj=0,k=0;
	while(now<(sum>>1)){
		if(i==j)break;
		if(c[i]==c[j]){
			if(a[i]-tai==a[j]-taj){
				k=a[i]-tai;
				i++;j--;
				tai=0;taj=0;
			}else if(a[i]-tai>a[j]-taj){
				k=a[j]-taj;
				taj=0;j--;
				tai+=k;
			}else{
				k=a[i]-tai;
				tai=0;i++;
				taj+=k;
			}
			now+=k;
			
		}else{
			if(a[i]-tai==a[j]-taj){
				k=a[i]-tai;
				i++;j--;
				tai=0;taj=0;
			}else if(a[i]-tai>a[j]-taj){
				k=a[j]-taj;
				taj=0;j--;
				tai+=k;
			}else{
				k=a[i]-tai;
				tai=0;i++;
				taj+=k;
			}
			now+=k;ans+=k;
		}
	}
	printf("%d",ans);
	
	
}
