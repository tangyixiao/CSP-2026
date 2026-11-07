//string
#include <bits/stdc++.h>
#define ll long long int
using namespace std;
ll nums[200005];
char cs[200005];


int main(){
	freopen("string.in", "r", stdin);
	freopen("string.out", "w", stdout);
	int n;
	cin >> n;
	ll length = 0;
	ll tmp;
	for (int i=1;i<=n;i++){
		cin >> nums[i] >> cs[i];
		length += tmp;
	}
	ll curr = 0;
	ll half = length/2;
	ll r = n+1;
	ll l = 1;
	ll lleft = 0;
	ll rleft = 0;
	ll ans = 0;
	char currr = ' ';
	while (l<r){
		lleft = nums[l];
		while (lleft != (ll)0){
//			if (lleft > rleft){
				if (rleft == 0){
					r--;
					rleft += nums[r];
					currr = cs[r];
				}
				
				if (currr != cs[l]){
					ans +=  min(rleft , lleft);
//					cout << abs(rleft - lleft) << endl;
				}
//				cout << lleft << " " << rleft << endl;
//				cout << l << " " << r << endl;
				ll tmpl = lleft;
				ll tmpr = rleft;
				lleft = max(tmpl - tmpr, (ll)0);
				rleft = max(tmpr - tmpl, (ll)0);
//				cout << max(rleft - l, (ll)0) << endl;
//				cout << lleft << " " << rleft << endl;
//			}
		}
		l++;
	}
	cout << ans << endl;
}

