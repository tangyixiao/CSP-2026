#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,ans;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		ans += "1";
		if(s1.substr(0,2) == s2.substr(0,2)){
			ans += "1";
			if(s1[2] <= 'C' && s2[2] <= 'C' || s1[2] >= 'D' && s2[2] >= 'D'){
				ans += "1";
				char a = s1[2],b = s2[2];
				if(a > b){
					swap(a,b);
				}
				if(a == 'A' && b == 'B' || a == 'B' && b == 'C' || a == 'D' || b == 'F'){
					ans += "1";
				}
				else{
					ans += "0";
				}
			}
			else{
				ans += "00";
			}
		}
		else{
			ans += "000";
		}
	}
	else{
		ans += "0000";
	}
	cout << ans;
	return 0;
}