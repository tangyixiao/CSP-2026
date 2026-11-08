#include<bits/stdc++.h>
using namespace std;
#define ll long long 
const int N=2e5+10;
int n,a[N],m;
ll val;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cin>>n>>m;
	for(int i=1;i<=n;i++) cin>>a[i];
	sort(a+1,a+n+1);
	//for(int i=1;i<=n;i++) cout<<a[i]<<" ";
	for(int i=30;i>=0;i--){
		ll d=(1LL<<i);
		if(d>a[n]) continue;
		int t=lower_bound(a+1,a+n+1,d)-a;
		if((n-t+1)>=m){
			val+=d;
			for(int j=1;j<=n;j++){
				if(j<t) a[j]=-1;
				else a[j]-=d;
			}
		}else{
			for(int j=1;j<=n;j++){
				if(a[j]>=d) a[j]-=d;
			}
			sort(a+1,a+n+1);
		}
	}
	cout<<val;
	return 0;
}
/*
5 3
31 3 1 15 7
*/
