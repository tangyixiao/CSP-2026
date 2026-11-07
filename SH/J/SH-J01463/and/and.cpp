#include <bits/stdc++.h>
using namespace std;
const int N=2*1e5+5;
long long a[N];
int n;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	int m;
	scanf("%d %d",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a[i]);	
	}
	if(m==n){
		long long ans=a[1];
		for(int i=2;i<=n;i++){
			ans&=a[i];
		}
		printf("%lld",ans);
	}else if(m==1){
		long long ans=0;
		for(int i=1;i<=n;i++)ans=max(ans,a[i]);
		printf("%lld",ans);
	}else if(m==2){
		long long ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(ans,a[i]&a[j]);
			}
		}
		printf("%lld",ans);
	}else if(m==n-1){
		long long ans=0,max_;
		for(int i=1;i<=n;i++){
			if(i==1){
				ans=a[2];
				for(int j=3;j<=n;j++){
					ans&=a[j];
				}
			}else{
				ans=a[1];
				for(int j=1;j<=n;j++){
					if(j==i)continue;
					ans&=a[j];
				}
			}
			max_=max(max_,ans);
		}
		printf("%lld",max_);
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
