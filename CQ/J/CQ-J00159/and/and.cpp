#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define endl '\n'
const int N=2e5+5;
int n,m;
ll a[N],ans;
void f(int idx,int b,ll cnt){
	if(b>m){
		ans=max(ans,cnt);
		return ;
	}
	for(int i=idx+1;i<=n;i++){
		ll sum=cnt;
		if(b==1) cnt=a[i];
		else cnt=(cnt&a[i]);
		f(i,b+1,cnt);
		cnt=sum;
	}
}
int main(){
    ios::sync_with_stdio(0);
    cin.tie(0);cout.tie(0);
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	cin>>n>>m;
	bool l=1;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		ll x=a[i]+1;
		int y=1;
		while(1){
			if(x==y) break;
			else if(y>x){
				l=0;
				break;
			}
			y*=2;
		}
	}
	if(l){
		sort(a+1,a+1+n);
		ans=a[n-m+1];
	}
	else f(0,1,0);
	cout<<ans;
	return 0;
}
