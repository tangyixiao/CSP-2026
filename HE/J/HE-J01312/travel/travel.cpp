#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
bool check1()
{
	if (s1[2] >= 'D' && s2[2] >= 'D')return true;
	else if (s1[2] < 'D' && s2[2] < 'D')return true;
	else return false;
}
bool check2()
{
	if ((s1[2] >= 'D' && s2[2] >= 'D') || (s1[2] < 'D' && s2[2] < 'D'))
	    if(s1[2] == s2[2] + 1 || s2[2] == s1[2] + 1)
		    return true;
	return false;
}
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
    cin >> c1 >> s1 >> c2 >> s2;
    bool t = c1[0] == c2[0] && c1[1] == c2[1];
    if (t)cout << 1;
    else cout << 0;
    if (t && s1[0] == s2[0] && s1[1] == s2[1])cout << 1;
    else cout << 0;
    if (t && s1[0] == s2[0] && s1[1] == s2[1] && check1())cout << 1;
    else cout << 0;
    if (t && s1[0] == s2[0] && s1[1] == s2[1] && check2())cout << 1;
    else cout << 0;
    cout << '\n';
    return 0;
}
