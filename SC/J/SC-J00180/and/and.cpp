#include<bits/stdc++.h>
#define endl '\n'
#define ll long long
using namespace std;
const int N=2e5+5;
ll a[N];
bool cmp(int a,int b){
	return a>b;
}
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);cout.tie(0);
	ll n,m;
	cin>>n>>m;
	for(int i=1;i<=n;i++)cin>>a[i];
	sort(a+1,a+1+n);
	if(m==n){
		ll ans;
		for(int i=1;i<=n;i++)ans&=a[i];
		cout<<ans;
	}else if(m==1)cout<<a[1];
	else if(m==2){
		ll ans=0;
		for(int i=1;i<=n;i++){
			for(int j=i+1;j<=n;j++){
				ans=max(a[i]&a[j],ans);
			}
		}
		cout<<ans;
	}else{
		cout<<'0';
	}
	return 0;
} 