#include <bits/stdc++.h>
using namespace std;
bool a[5];


int main() {
	freopen("travel.in","r",stdin);
	freopen("travel .out","w",stdout);
	int c, cc;
	string s, ss;
	cin >> c;
	for (int i = 0; i < 3; i++)
		cin	 >> s[i] ;
	cin >> cc;
	for (int i = 0; i < 3; i++)
		cin	 >> ss[i] ;
	for (int i = 0; i <= 4; i++) {
		if (c == cc )
			a[i] = 1;
		else if (s[i] == ss[i ]  )
			a[i] = 1;
		else if ((s[i ] == 'A' && ss[i ] == 'B') || ( s[i ] == 'B' && ss[i] == 'A'  ) || (s[i ] == 'A'
		         && ss[i ] == 'C') || (s[i ] == 'C' && ss[i ] == 'B') || ( s[i ] == 'B' && ss[i] == 'C'  )
		         || ( s[i ] == 'C' && ss[i ] == 'A' ) || (s[i] == 'D' && ss[i ] == 'E') || ( s[i] == 'E'
		                 && ss[i] == 'D'  ) )
			a[i] = 1;
		else if ((s[i ] == 'A' && ss[i ] == 'B') || ( s[i ] == 'B' && ss[i] == 'A'  ) || (s[i ] == 'C' && ss[i ] == 'B')
		         || ( s[i ] == 'B' && ss[i] == 'C'  )
		         || (s[i] == 'D' && ss[i ] == 'E') || ( s[i] == 'E'
		                 && ss[i] == 'D'  ) )
			a[i] = 1;
		else
			a[i] = 0;
	}
	for (int i = 0; i <= 3; i++)
		cout << a[i];
	return 0;
}
