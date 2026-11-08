#include<bits/stdc++.h>
#define int long long
using namespace std;
int c1, c2, s1, s2;
char st1, st2;
signed main( ){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	ios::sync_with_stdio(0);
	cin.tie(0), cout.tie(0);
	cin >>c1 >>s1 >>st1 >>c2 >>s2 >>st2;
	if ( c1==c2 ){
		cout <<1;
		if ( s1==s2 ){
			cout <<1;
			if ( (st1 - 'A' < 3 && st2 - 'A' < 3) || (st1 - 'A'>=3 && st2 - 'A'>=3) ){
				cout <<1;
				if ( abs((st1 - 'A') - (st2 - 'A'))==1 )
					cout <<1;
				else
					cout <<0;
			}
			else
				cout <<"00";
		}
		else
			cout <<"000";
	}
	else
		cout <<"0000";
	return 0;
}
