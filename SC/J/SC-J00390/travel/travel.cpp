#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0);
	cout.tie(0);
	int c1, c2, rp, rpg;
	string s1, s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2)
		cout << 1;
	else
	{
		cout << "0000";
		return 0;
	}
	if(s1[0] == '0')
	{
		rp = s1[1] - '0';
	}
	else
	{
		rp = (s1[0] - '0') * 10 + s1[1] - '0';
	}
		
	if(s2[0] == '0')
		rpg = s2[1] - '0';
	else
		rpg = (s2[0] - '0') * 10 + s2[1] - '0';
	if(rp == rpg)
		cout << 1;
	else
	{
		cout << "000";
		return 0;
	}
	if((s1[2] <= 'C' && s2[2] > 'C') || (s2[2] > 'C' && s1[2] <= 'C'))
	{
		cout << "00";
		return 0;
	}
	else
		cout << 1;
	if(abs(int(s1[2]) - int(s2[2])) == 1)
		cout << 1;
	else
		cout << 0;
	return 0;
}