#include <bits/stdc++.h>
#define ll long long
using namespace std;

signed main(){
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	freopen("string.in" ,"r" ,stdin);
	freopen("string.out" ,"w" ,stdout);
	ll n ,cnt = 0 ,ans = 0;
	cin>>n;
	vector<pair<ll ,char>> a(1);
	char st ,z = '1';
	for(ll i = 1;i <= n;i++){
		ll s;
		cin>>s>>st;
		if(st == z){
			a[cnt].first += s;
		}
		else{
			z = st;
			a.push_back({s ,st});
			cnt++;
		}
	}
	vector<pair<ll ,char>> b(cnt+1);
	for(ll i = 1;i <= cnt;i++){
		b[i] = a[cnt-i+1];
	}
	for(ll i = 1 ,j = 1;i <= cnt && j <= cnt;){
		if(a[i].second != b[j].second){
			if(a[i].first > b[j].first){
//				cout<<i<<" "<<j<<" 1"<<" ";
				a[i].first -= b[j].first;
				ans += b[j].first;
				j++;
			}
			else{
				if(a[i].first < b[j].first){
//					cout<<i<<" "<<j<<" 2"<<" ";
					b[j].first -= a[i].first;
					ans += a[i].first;
					i++;
				}
				else{
//					cout<<i<<" "<<j<<" 3"<<" ";
					ans += a[i].first;
					i++;
					j++;
				}
			}
		}
		else{
			if(a[i].first > b[j].first){
//				cout<<i<<" "<<j<<" 4"<<" ";
				a[i].first -= b[j].first;
				j++;
			}
			else{
				if(a[i].first < b[j].first){
//					cout<<i<<" "<<j<<" 5"<.<" ";
					b[j].first -= a[i].first;
					i++;
				}
				else{
//					cout<<i<<" "<<j<<" 6"<<" ";
					i++;
					j++;
				}
			}
		}
//		cout<<ans<<"\n";
	}
	cout<<ans/2;
	return 0;
}