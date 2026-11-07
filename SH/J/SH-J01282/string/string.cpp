#include<bits/stdc++.h>
#define ll long long
#define endl '\n'
using namespace std;
struct node{
	ll num;
	char c;
}; 
ll n, len;
ll x;
char c;
vector<node> v;
ll is_hui(){
	ll cnt = 0, j = 0, k = n - 1;
	for ( ll i = 0 ; i < len / 2; i++ ){
		if (v[j].c != v[k].c){
			cnt++;
		}
		v[j].num--;
		v[k].num--;
		if (v[j].num == 0){
			j++;
		}
		if (v[k].num == 0){
			k--;
		}
	}
	return cnt;
}
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0),cout.tie(0);
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	cin >> n;
	for ( ll i = 0 ; i < n ; i++ ){
		cin >> x >> c;
		v.push_back({x,c});
		len += x;
	}
	cout << is_hui();
	return 0;
} 
