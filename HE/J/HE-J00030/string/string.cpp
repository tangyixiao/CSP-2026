#include<bits/stdc++.h>
using namespace std;
long long a[200010],n,ans;
char c[200010];
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);
		cin>>c[i];
	}
	long long l=1,r=n;
	while(l<r){
		if(c[l]!=c[r]){
			if(a[l]<=a[r]){
				a[r]-=a[l];
				ans+=a[l];
				a[l]-=a[l];
			}else{
				a[l]-=a[r];
				ans+=a[r];
				a[r]-=a[r];
			}
		}else{
			if(a[l]<=a[r]){
				a[r]-=a[l];
				a[l]-=a[l];
			}else{
				a[l]-=a[r];
				a[r]-=a[r];
			}			
		}
		if(a[l]==0){
			l++;
		}
		if(a[r]==0){
			r--;
		}
	}
	printf("%lld",ans);
	return 0;
}
