#include<bits/stdc++.h>
using namespace std;
#define int long long
int n,m,a,cnt[40],p,ans;
bool flag;
vector<int> b,bb;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	scanf("%lld %lld",&n,&m);
	for(int i=1;i<=n;i++){
		scanf("%lld",&a);
		bb.push_back(a);
	}
	p=30;
	while(1){
		memset(cnt,0,sizeof(cnt));
		for(int &x:bb){
			for(int i=0;i<=30;i++){
				cnt[i]+=((x>>i)&1);
			}
		}
		flag=0;
		for(int i=p-1;i>=0;i--){
			if(cnt[i]>=m){
				p=i;
				ans+=(1<<p);
				flag=1;
				break;
			}
		}
		if(flag==0){
			break;
		}
		for(int &x:bb){
			if(((x>>p)&1)==1){
				b.push_back(x);
			}
		}
		bb=b;
		b.clear();
	}
	printf("%lld",ans);
	return 0;
}
