#include<bits/stdc++.h>
using namespace std;
string a, s, d, f, ans;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> s >> d >> f;
	if(a == d){
		ans += '1';
		if(s[1] == f[1]){
			ans += '1';
			if((s[2] <= 'C' && f[2] <= 'C') || (s[2] > 'C' && f[2] > 'C')){
				ans += '1';
				if(abs(s[2] - f[2]) == 1) ans += '1';
				else ans += '0';
			}
			else ans += "00";
		}
		else ans += "000";
	}
	else ans += "0000";
	cout << ans;
} 
