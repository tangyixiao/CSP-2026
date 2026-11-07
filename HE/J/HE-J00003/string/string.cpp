#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,a[200010],s[200010],sum=0,p,id1,id2,mid,ans=0;
char c[200010];
signed main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%lld",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld %c",&a[i],&c[i]);
		sum+=a[i];
	}
	for(int i=1;i<=n;i++){
		s[i]=s[i-1]+a[i];
	}
	mid=(sum+1)/2;
	id1=1;
	id2=n;
	p=0;
	while(id1<id2){
		int tmp=p;
		p=sum-s[id2-1];
		if(p<=s[id1]){
			if(c[id1]!=c[id2]){
				ans+=p-tmp;
			}
		}
		else{
			if(c[id1]!=c[id2]){
				ans+=s[id1]-tmp;
			}
			id1++;
			while(id1<id2&&p>=s[id1]){
				if(c[id1]!=c[id2]){
					ans+=a[id1];
				}
				id1++;
			}
			if(id1<id2&&p>s[id1-1]&&c[id1]!=c[id2]){
				ans+=p-s[id1-1];
			}
		}
		id2--;
	}
	printf("%lld",ans);
	return 0;
} 
