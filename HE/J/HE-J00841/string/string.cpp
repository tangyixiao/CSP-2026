#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll N=2e5+50;
ll n;
ll a[N];
char c[N];
ll ans=0;
ll sum=0;

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);cout.tie(0);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		cin>>c[i];
		sum+=a[i];
	}
	ll l=1,r=n,now1=a[1],now2=a[n];
	while(l<=r){
		if(c[l]!=c[r]){
			if(now1>now2){
				now1-=now2;
				r--;
				ans+=now2;
				now2=a[r];
			}
			else if(now1<now2){
				now2-=now1;
				l++;
				ans+=now1;
				now1=a[l];
			}
			else{
				l++;r--;
				ans+=now1;
				now1=a[l];now2=a[r];
			}
		}
		else{
			if(now1>now2){
				now1-=now2;
				r--;now2=a[r];
			}
			else if(now1<now2){
				now2-=now1;
				l++;now1=a[l];
			}
			else{
				l++;r--;
				now1=a[l];now2=a[r];
			}
		}
	}
	cout<<ans;	
	return 0;
}/*
3 
2 a
2 b
1 c

*/
