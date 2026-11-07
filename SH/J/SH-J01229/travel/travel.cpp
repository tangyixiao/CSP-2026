#include <iostream>
#include <string>
#include <cmath>
using namespace std;

const string alpha = "ABCDF";

struct ticket{
	string c;
	string s;
};

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ticket a,b;
	cin >> a.c >> a.s >> b.c >> b.s;
	bool _1 = (a.c == b.c);
	bool _2 = (a.s[0] == b.s[0] && a.s[1] == b.s[1]);
	bool _3 = ((a.s[2] <= 'C' && b.s[2] <= 'C')||
			   (a.s[2] >= 'D' && b.s[2] >= 'D'));
	bool _4 = (abs((int)alpha.find(a.s[2])-(int)alpha.find(b.s[2])) == 1);
	cout << _1;
	cout << (_1&&_2);
	cout << (_1&&_2&&_3);
	cout << (_1&&_2&&_3&&_4);		   
	return 1;
}
