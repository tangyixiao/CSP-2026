#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
int main(){
	ios::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> b >> c >> d;
	if(a == c)cout << 1;
	else cout << 0;
	if(a == c && b.substr(0,2) == d.substr(0,2))
		cout << 1;
	else cout << 0;
	if(a == c && b.substr(0,2) == d.substr(0,2) && ((b[2] < 'D') == (d[2] < 'D')))
		cout << 1;
	else cout << 0;
	if(a == c && b.substr(0,2) == d.substr(0,2) && ((b[2] < 'D') == (d[2] < 'D')) && (b[2] - 1 == d[2] || d[2] - 1 == b[2]) && !(b[2] == 'C' && d[2] == 'D') && !(b[2] == 'D' && d[2] == 'C'))
		cout << 1;
	else cout << 0;
}
