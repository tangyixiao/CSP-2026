#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll a[1000005];
int main(){
	freopen("in.and","r",stdin);
	freopen("out.and","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	ll n , m;
	cin >> n >> m;
	for(int i = 1; i <= n;i++){
		cin>>a[i];
	}
	ll l = 1;
	ll r= 1;
	ll maxn = 0;
	ll cnt= 0;
	if(m==1){
		for(int i = 1; i <= n;i++){
			maxn = max(maxn,a[i]);
		}
		cout << maxn;
	}
	if(m==2){
		while(1){
			if(r>=n&&l>=m-n+1){
				cout <<maxn;
				return 0;
			}
			//cout << l << " " << r<<endl;
			if(r-l+1==m){
				cnt=a[l];
				for(int i = l+1;i<= r;i++){
					cnt=cnt(cnt&a[i]);
				}
				maxn= max(maxn , cnt);
				l=l+1;
				r= l;
			}		
			r++;
		}
	}
	if(m == n){
		cnt=a[1];
		for(int i = 2;i <= n;i++){
			cnt=(cnt&a[i]);
		}
		cout << cnt;
	}
	if(m==n-1){
		ll cnt1=a[1];
		ll cnt2=a[2];
		for(int i = 2;i <= n-1;i++){
			cnt1=(cnt1&a[i]);
		}
		for(int i = 3;i <= n;i++){
			cnt2=(cnt2&a[i]);
		}
		cout << max(cnt1,cnt2);
	}
	return 0;
} 