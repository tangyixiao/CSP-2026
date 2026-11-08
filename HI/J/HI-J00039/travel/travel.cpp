#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	int c1,c2,row1,row2,col1,col2;
	string s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	row1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	row2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	col1 = s1[2] - 'A';
	col2 = s2[2] - 'A';
	bool a = c1 == c2;
	bool b = a && row1 == row2;
	bool c = b && ((col1 < 3 && col2 < 3) || (col1 >= 3 && col2 >= 3));
	bool d = c && abs(col1 - col2) == 1;
	
	cout << a <<b << c << d;
	return 0;
}
