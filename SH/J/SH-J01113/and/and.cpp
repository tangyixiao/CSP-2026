#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
vector<ll>arr;
bool is_k2_1(ll n){
	ll a;
	for(int i=1;i<=30;++i){
		a=int(pow(2,i));
		if(n==(a-1)){
			return 1;
		}
	}
	return 0;
}
bool cmp(ll a,ll b){
	return a>b;
}
ll ans;
int main(){
	freopen("and.in","r",stdin);
	freopen("and.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	ll n,m;
	cin >> n >> m;
	for(int i=1;i<=n;++i){
		ll tmp;
		cin >> tmp;
		arr.push_back(tmp);
	}
	sort(arr.begin(),arr.end(),cmp);
	ll vaild_id=-1;
	for(int i=0;i<n;++i){
		if(is_k2_1(arr[i])){
			vaild_id=i;
			break;
		}
	}
	if(vaild_id==-1){
		ans=arr[0];
		for(int i=1;i<m;++i){
			ans&=arr[i];
		}
	}else{
		ans=arr[vaild_id];
		int errpos=-1;
		if((vaild_id+m)>n){
			errpos=vaild_id+m-n;
			for(int i=vaild_id+1;i<n;++i){
				ans&=arr[i];
			}
			for(int i=0;i<errpos;++i){
				ans&=arr[i];
			}
			cout << ans;
			return 0;
		}
		for(int i=vaild_id+1;i<vaild_id+m;++i){
			ans&=arr[i];
		}
	}
	cout << ans;
	return 0;
}
