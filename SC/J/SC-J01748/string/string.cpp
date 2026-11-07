#include<bits/stdc++.h>
using namespace std;
#define int long long
const int MAXN=2e5+5;
int n;
int a[MAXN];
char c[MAXN];
signed main(){
//	freopen("Bsub.txt","r",stdin);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin.tie(0);cout.tie(0);ios::sync_with_stdio(0);
	cin>>n;
	int sum=0ll;
	for(int i=1;i<=n;i++){
		cin>>a[i];cin>>c[i];
		sum+=a[i];
	}
	int sum2=0ll;
	int ans=0ll;
	int l=1ll,r=n,cntl=a[1],cntr=a[n],posl=a[1],posr=sum-a[n]+1ll;
	while(posl<posr){
		if(posl>sum-posr+1ll){//左多
			if(c[l]!=c[r]) ans+=cntr;
			cntl-=cntr;
			r--;
			cntr=a[r];
			posr-=a[r];
		}
		else{
			if(c[l]!=c[r]) ans+=cntl;
			cntr-=cntl;
			l++;
			cntl=a[l];
			posl+=a[l];
		}
	}
	cout<<ans;
	return 0;
}