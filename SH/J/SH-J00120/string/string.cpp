#include<bits/stdc++.h>
using namespace std;
map<char,bool>mp;
struct str{
	int x;
	char c;
}a[200005];

int main(){
	freopen("string.in","r",stdin);
	freopen("string.out","w",stdout);
	int n;
	cin >> n;
	for(int i = 1; i <= n; i++){
		int x;
		char c;
		cin >> x >> c;
		a[i].x = x,a[i].c = c;
		mp[c] = 1;
	}
	int cnt = 0;
	for(char i = 'a'; i <= 'z'; i++){
		if(mp[i] != 0){
			cnt++;
		}
	}
	if(cnt == 1){
		cout << 0;
		return 0;
	}
	long long ans = 0;
	int l = 1,r = n;
	while(l < r){
//		cout << l << "   " << r << endl;
		if(a[l].c != a[r].c){
			if(a[l].x < a[r].x){
				a[r].x -= a[l].x;
				ans += a[l].x;
				l++;
			}else if(a[l].x > a[r].x){
				a[l].x -= a[r].x;
				ans += a[r].x;
				r--;
			}else if(a[l].x == a[r].x){
				ans += a[l].x;
				l++;
				r--;
			}
		}else{
			if(a[l].x < a[r].x){
				a[r].x -= a[l].x;
				l++;
			}else if(a[l].x > a[r].x){
				a[l].x -= a[r].x;
				r--;
			}else if(a[l].x == a[r].x){
				l++;
				r--;
			}
		}
	}
	cout << ans;
	return 0;
}

