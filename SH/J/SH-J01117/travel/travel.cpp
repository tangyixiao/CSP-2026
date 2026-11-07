//Author: yangwang2013
#include <bits/stdc++.h>
#define dbg(x) cerr << #x << " = " << x << endl
#define sz(x) (int)x.size()
#define all(x) (x.begin(),x.end())
#define fi first
#define se second
#define pb push_back
#define eb emplace_back
using namespace std;
using ll = long long;
using ull = unsigned long long;
using vi = vector<int>;
using pii = pair<int,int>;
using pll = pair<ll,ll>;
const int INF = 0x3f3f3f3f;
const ll LINF = 0x3f3f3f3f3f3f3f3f;
const int MAXN = 200005;
int a,c;
string b,d;

int check(char ch){
	if (ch == 'A' || ch == 'B' || ch == 'C') return 1;
	else return 2;
}

void solve(){
	cin >> a >> b >> c >> d;
	if (a == c){
		cout << 1;
		string now;
		now += b[0];
		now += b[1];
		string nowx;
		nowx += d[0];
		nowx += d[1];
		if (stoi(now) == stoi(nowx)){
			cout << 1;
			if (check(b[2]) == check(d[2])){
				cout << 1;
				if (abs((int)(b[2]-d[2])) == 1){
					if (b[2] == 'D' && d[2] == 'C' || b[2] == 'C' && d[2] == 'D'){
						cout << 0;
					}else{
						cout << 1;
					}
				}else{
					cout << 0;
				}
			}else{
				cout << "00";
			}
		}else{
			cout << "000" << endl;
		}
	}else{
		cout << "0000" << endl;
	}
}

int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int t = 1;
	//cin >> t;
	while (t--){
		solve();
	}
	return 0;
}
