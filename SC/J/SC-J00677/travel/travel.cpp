#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;cin >> c1 >> s1 >> c2 >> s2;
	string ans;
	string r1,r2;char co1,co2;
	r1.push_back(s1[0]);r1.push_back(s1[1]);co1 = s1[2];
	r2.push_back(s2[0]);r2.push_back(s2[1]);co2 = s2[2];
	if(c1 == c2) ans.push_back('1');
	else ans.push_back('0');
	if(c1 == c2 && r1 == r2) ans.push_back('1');
	else ans.push_back('0');
	if((c1 == c2) && (r1 == r2) && ((co1 <= 'C' && co2 <= 'C') || (co1 >= 'D' && co2 >= 'D'))) ans.push_back('1');
	else ans.push_back('0');
	if((c1 == c2) && (r1 == r2) && ((co1 == 'A' && co2 == 'B') || (co1 == 'B' && co2 == 'A') || (co1 == 'B' && co2 == 'C') || (co1 == 'C' && co2 == 'B') || (co1 == 'D' && co2 == 'F') || (co1 == 'F' && co2 == 'D'))) ans.push_back('1');
	else ans.push_back('0');
	cout << ans;
	return 0;
}