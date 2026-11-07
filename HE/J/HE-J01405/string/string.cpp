#include<bits/stdc++.h>
using namespace std;
long long n,sum[200005],ans;
char a[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++)
	cin>>sum[i]>>a[i];
	int l=1,r=n;
	while(l<r){
		if(a[l]!=a[r]){
			ans+=min(sum[l],sum[r]);
		    if(sum[l]>sum[r])
		    sum[l]-=sum[r],r--;
		    else if(sum[l]<sum[r])
		    sum[r]-=sum[l],l++;
		    else r--,l++;
		}
		else{
			if(sum[l]>sum[r])
		    sum[l]-=sum[r],r--;
		    else if(sum[l]<sum[r])
		    sum[r]-=sum[l],l++;
		    else r--,l++;
		}
	}
	printf("%d",ans);
} 
