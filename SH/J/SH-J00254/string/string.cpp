#include <bits/stdc++.h>
using namespace std;
long long a[200010],b[200010];
int n,t;
long long m[2000010],l;
long long lhave,rhave,lat,rat;
long long ans;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;++i){
		long long k;
		char c;
		cin>>k>>c;
		c-='a';
		c++;
		if(c==b[t]) a[t]+=k;
		else a[++t]=k,b[t]=c;
	}
	n=t;
	lat=1,rat=n;
	lhave=a[1],rhave=a[n];
	for(int i=1;i<=l/2;++i){
		if(m[i]!=m[l-i+1]) ans++;
	}
//	printf("really_ans=%lld\n",ans);
	ans=0;
//		printf("ans=%d,lhave=%d,rhave=%d,lat=%d,rat=%d\n",ans,lhave,rhave,lat,rat);
	while(lat<rat){
		if(b[lat]!=b[rat]){
			if(lhave<rhave){
				ans+=lhave;
				rhave-=lhave;
				lat++;
				lhave=a[lat];
			}else if(lhave==rhave){
				ans+=lhave;
				lat++;rat--;
				lhave=a[lat];
				rhave=a[rat];
			}else if(lhave>rhave){
				ans+=rhave;
				lhave-=rhave;
				rat--;
				rhave=a[rat];
			}
		}else{
			if(lhave<rhave){
				rhave-=lhave;
				lat++;
				lhave=a[lat];
			}else if(lhave==rhave){
				lat++;rat--;
				lhave=a[lat];
				rhave=a[rat];
			}else if(lhave>rhave){
				lhave-=rhave;
				rat--;
				rhave=a[rat];
			}
		}
	}
	cout<<ans;
	return 0;
}
