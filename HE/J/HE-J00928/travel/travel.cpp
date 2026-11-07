#include<bits/stdc++.h>
#define ll long long
using namespace std;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(nullptr); cout.tie(nullptr);
	int ans = 0;
	string c1, s1, c2, s2, t1, t2;
	cin >> c1 >> s1 >> c2 >> s2;
	ll len1, len2;
	len1 = s1.size();
	len2 = s2.size();
	char k1, k2;
	k1 = s1[len1 - 1];
	k2 = s2[len2 - 1];
	ll a1, a2;
	a1 = (ll)k1;
	a2 = (ll)k2;
	
	
	if(c1 == c2){
		cout << "1";
		ans ++;
	}else {
		cout << "0";
	}
	
	for(int i = 0; i < s1.size() - 1; i ++){
		t1 += s1[i];
	}
	for(int i = 0; i < s2.size() - 1; i ++){
		t2 += s2[i];
	}
	if(t1 == t2 && a1 != a2 && ans == 1){
		cout << "1";
		ans ++;
	}else {
		cout << "0";
	}
	
	if((k1 == 'D' && k2 == 'C') || (k1 == 'C' && k2 == 'D')){
		cout << "0";
	}else if(ans == 2){
		cout << "1";
		ans ++;
	}else {
		cout << "0";
	}
	
	if(ans == 3 && (abs(a1 - a2) == 1 || ((a1 == 70 && a2 == 68) || (a1 == 68 && a2 == 70)))){
		cout << "1";
	}else {
		cout << "0";
	}
	return 0;
}
