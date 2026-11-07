#include<bits/stdc++.h>
using namespace std;
int n,m;
vector<long long>a(200000,0);
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%d %d",&n,&m);
	
	scanf("%lld",&a[0]);
	long long ans=a[0],mx=0;
	for(int i=1;i<n;i++){
		scanf("%lld",&a[i]);
		ans&=a[i];
		mx=max(mx,a[i]);
	}
	if(m==1){
		printf("%lld",mx);
		return 0;
	}else if(m==n){
		printf("%lld",ans);
		return 0;
	}
	ans=0;
	long long su=1<<n+1;
	while(su--){
		long long t=su;
		long long i=0,num=0,l=0;
		int u=0;
		while(t){
			if(t%2==1){
				if(u==0){
					num=a[i];
					u=1;
					l++;
				}else{
					num&=a[i];
					l++;
				}
				if(l==m){	
					ans=max(ans,num);
					break;
				}
				if(l>m){
					break;
				}
			}
			t/=2;
			i++;
			
		}
	}
	printf("%lld",ans);
	return 0;
} 
