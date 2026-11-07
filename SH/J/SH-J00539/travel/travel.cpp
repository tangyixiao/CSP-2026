#include <bits/stdc++.h>
using namespace std;
#define ll long long
const int N = 1e5 + 5;
const ll inf = 1e18;
int c1, c2;
string s1, s2;
map<char, int> mp;

void solve(){
	
	mp['A'] = 1;
	mp['B'] = 1;
	mp['C'] = 1;
	mp['D'] = 2;
	mp['E'] = 2;
	
	cin>>c1>>s1>>c2>>s2;
	if(c1 == c2){
		if(s1[0] == s2[0] && s1[1] == s2[1]){
			char x = s1[2], y = s2[2];
			if(mp[x] == mp[y]){
				if(mp[x] == 2 || abs(x - y) == 1){
					cout<<1111;
				} else {
					cout<<1110;
				}
			} else {
				cout<<1100;
			}
		} else {
			cout<<1000;
		}
	} else {
		cout<<"0000";
	}
} 

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	solve();
	return 0;
}
