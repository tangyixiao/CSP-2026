#include<iostream>
using namespace std;

typedef long long ll;
const int N=2e5+20;
struct node{
	ll cnt;
	char ai;
}a[N];
int n;
ll ans;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		scanf("%lld%s",&a[i].cnt,&a[i].ai);
	}
	int l=1,r=n;
	while(l<=r){
		if(a[l].ai==a[r].ai){
			if(a[l].cnt<a[r].cnt){
				a[r].cnt-=a[l].cnt;
				a[l].cnt=0;
				++l;
			}else if(a[l].cnt>a[r].cnt){
				a[l].cnt-=a[r].cnt;
				a[r].cnt=0;
				--r;
			}else if(a[l].cnt==a[r].cnt){
				a[l].cnt=0;
				a[r].cnt=0;
				++l;
				--r;
			}
		}else{
			ans+=(ll)(min(a[l].cnt,a[r].cnt));
			if(a[l].cnt<a[r].cnt){
				a[r].cnt-=a[l].cnt;
				a[l].cnt=0;
				++l;
			}else if(a[l].cnt>a[r].cnt){
				a[l].cnt-=a[r].cnt;
				a[r].cnt=0;
				--r;
			}else if(a[l].cnt==a[r].cnt){
				a[l].cnt=0;
				a[r].cnt=0;
				++l;
				--r;
			}
		}
	}
	printf("%lld",ans);
	return 0;
}