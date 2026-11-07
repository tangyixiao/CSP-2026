#include<bits/stdc++.h>
#define int long long
using namespace std;
const int N=2e5+5;
int n,m,a[N],ans,s,q[N],head,tail=-1,d[N],cnt;
signed main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	for(int i=30LL;i>=0LL;i--){
		int tmp=0LL;
		for(int j=1;j<=n;j++)if((a[j]>>i)&1LL)tmp++;
		if(tmp>=m){
			for(int j=1;j<=n;j++)if((a[j]>>i)&1LL)q[++tail]=j;
			s=i;
			break;
		}
	}
	for(int j=s;j>=0LL;j--){
		int tmp=0LL;
		for(int i=head;i<=tail;i++)if((a[q[i]]>>j)&1LL)tmp++;
		if(tmp>=m){
			ans+=(1LL<<j);
			cnt=0LL;
			for(int i=head;i<=tail;i++){
				if((a[q[i]]>>j)&1LL)d[++cnt]=q[i];
			}
			tail=-1LL;
			for(int i=1;i<=cnt;i++)q[++tail]=d[i];
		}
	}
	cout<<ans;
	return 0;
}