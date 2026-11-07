#include <bits/stdc++.h>
using namespace std;
int n;
long long a[200005],sum;
char c[200005];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%lld %c",&a[i],&c[i]),sum+=a[i];
	long long x = sum/2,s = 0;
	long long ans=0;
	int j=n;
	for(int i=1;s<x;i++){
		if(s+a[i]>x){
			if(sum%2==0){
				long long l = x-s,r = s+a[i]-x;
				if(l>r)
					ans+=l-r;
			}else{
				long long l = x-s,r = s+a[i]-x-1;
				if(l>r)
					ans+=l-r;
			}
			break;
		}
		s+=a[i];
		for(;a[i]>0&&j>i;){
			if(c[j]!=c[i])
				if(a[i]>=a[j])
					ans+=a[j],a[i]-=a[j],j--;
				else{
					ans+=a[i];
					a[j]-=a[i];
					break;
				}
			else
				if(a[i]>=a[j]){
					a[i]-=a[j];
					j--;
				}else{
					a[j]-=a[i];
					break;
				}
		}
		//printf("%lld ",ans);
	}
	printf("%lld",ans);
	return 0;
}
