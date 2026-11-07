#include <bits/stdc++.h>

using namespace std;

signed main()
{
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string c1, c2, c3, c4;
	cin >> c1 >> c2 >> c3 >> c4;
	
	string ans = "";
	if(c1 == c3) ans += "1";
	else ans += "0";
	 
	if(c2[0] == c4[0] && c2[1] == c4[1] && ans[0] == '1') ans += "1";
	else ans += "0";
	
	if(((c2[2] <= 'C' && c4[2] <= 'C') || (c2[2] > 'C' && c4[2] > 'C')) && ans[0] == '1' && ans[1] == '1') ans += "1";
	else ans += "0";
	
	if((abs(c2[2] - c4[2]) == 1) && ans[1] == '1' && ans[0] == '1' && ans[2] == '1') ans += "1";
	else ans += "0";
	
	cout << ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0; 
}
