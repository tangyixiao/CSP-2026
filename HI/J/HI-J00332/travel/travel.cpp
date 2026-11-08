#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2,ans = "";
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		ans += "1";
		if(s1[0] == s2[0] && s1[1] == s2[1]){
			ans += "1";
			char c = s1[2],d = s2[2];
			if((c <= 'C' && d <= 'C') || (c > 'C' && d > 'C')){
				ans += "1";
				if(abs(c - d) == 1){
					ans += "1";
					cout << ans;
				}
				else cout << "1110";
			}
			else cout << "1100";	
		}
		else cout << "1000";
	}
	else{
		cout << "0000";
	}
	return 0;
}
