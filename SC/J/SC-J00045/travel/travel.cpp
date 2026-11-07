#include <bits/stdc++.h>
using namespace std;
string a,b,c,d,ans;
int main()
{
	freopen("trevel.in","r",stdin);
	freopen("trevel.out","w",stdout);
	cin >> a >> b >> c >> d;
	if(a == c) ans += '1';
	else{cout << "0000";return 0;}
	if(b[0] == d[0] && b[1] == d[1]) ans += '1';
	else{ans += "000";cout << ans;return 0;}
	if((b[2] <= 'C' && d[2] <= 'C') || (b[2] > 'C' && d[2] > 'C')){ans += '1';}
	else {ans += "00";cout << ans;return 0;}
	if(b[2] == d[2]+1 || b[2] == d[2]-1) ans += '1';
	else ans += '0';
	return cout << ans,0; 
}