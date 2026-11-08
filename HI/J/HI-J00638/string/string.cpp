#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
const int A = 10005;
struct L{
	int x;
	string y;
}a[A];
int cnt,t;
string s;
bool fl = 0;
int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	ll n,t1,t2;
	cin >> n;
	for(int i = 1;i <= n;i++){
		cin >> a[i].x >> a[i].y;
		t += a[i].x;
		for(int j = 1;j <= a[i].x;j++) s += a[i].y;
	}
	t1 = s.size() / 2;
	t2 = s.size() / 2 + 1;
	int l = 2,r = t = s.size();
	swap(s[t2],s[r]);
	int count = 0;
	while(l < r){
		for(int i = 1;i <= t1;i++){
			if(s[i] == s[t - i]){
				fl = 1;
				continue;
			}
			else{
				fl = 0;
				break;
			}
		}
		if(fl) break;
		l += count,r -= count;
		swap(s[l],s[r]);
		count++;
		cnt++;
	}
	cout << cnt;
	return 0;
}

