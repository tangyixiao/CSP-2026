#include<bits/stdc++.h>
using namespace std;
#define ll long long
const int N=5e5+10;
int n;
ll m;
ll a[N];
set<ll> st;
map<ll,ll> mp;
//2fen	
ll cnt=0;
ll ans=0;		
int j=0;
bool check(ll k){
	vector <pair<ll,ll> > p;
	ll ms=m;
	cnt=0;
	j=0;
	for(pair<ll,ll> _ : mp){
		ll x,y;
		x=_.first;
		if(x>k) break;
		y=_.second;
//		cout<<'h'<<endl;
//		cout<<x<<' '<<y<<endl;
		p.push_back({x,y})	;
		j++;
	}
	j--;
//	cout<<j<<"===="<<endl;
//	for(int i=j;i>=0;i--) cout<<p[i].first<<' '<<p[i].second<<endl;
	for(int i=j;i>=0;i--){
		ll _first=p[i].first;
		ll _second=p[i].second;
//		cout<<'f'<<_first<<' '<<_second<<endl;
		if(_first<=k && _second>0){
			if(_second*(k-_first)<=ms){
				ms-=_second*(k-_first);
				cnt+=_second;
//				cout<<"完"<<' '<<_first<<'='<<_second<<endl;
//				cout<<"取了后： "<<ms<<' '<<cnt<<endl;
			}
			else{
				ll maxq=ms/(k-_first);
				ms-=maxq*(k-_first);
				cnt+=maxq;
//				cout<<"不够完全"<<' '<<_first<<'='<<_second<<endl;
//				cout<<"取了后： "<<ms<<' '<<cnt<<endl;
			}
		}
		
	}
	return ms>=0;
}
int main(){
	ios::sync_with_stdio(false); 
	cin.tie(0); 
	freopen("crystal.in", "r", stdin);
	freopen("crystal.out", "w", stdout);
	//45pts
	cin>>n>>m;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		mp[a[i]]++;
		st.insert(a[i]);
	}
	ll ans=0;
	for(ll i :st){
//		ll ms=m;
//		ll cnt=0;
//		for(int j=1;j<=n;j++){
//			if(ms>=(a[i]-a[j]) && a[i]>=a[j]){
//				cnt++;
//				ms-=(a[i]-a[j]);
//			}
//		}
		if(check(i)) ans=max(ans,cnt);
	}
	cout<<ans;
	//======
//	2fen
//	sort(a+1,a+1+n);
//	ll l=1,r=n;
//	while(l<=r){
//		cout<<l<<' '<<r;
//		ll mid=(l+r)/2;
//		cout<<' '<<mid<<endl;
////		cout<<ans<<'f'<<mid<<endl;	
//		if(check(a[mid])){	
////			cout<<ans<<'k'<<mid<<endl;		
//			ans=max(ans,cnt);
//			cout<<cnt<<endl;
//			l=mid+1;
//			
//		}else{
//			r=mid-1;
//		}
//	}
//	cout<<ans;
	return 0;
}
