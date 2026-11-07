#include<bits/stdc++.h>
using namespace std;
bool a1 = 0,b1 = 0,c1 = 0,d1 = 0;
string a,b,c,d;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> b >> c >> d;
	if(a == c) a1 = 1;
	if(a1&&b[0] == d[0]&&b[1] == d[1]) b1 = 1;
	
	int l=0,r=0,l1=0,r1=0;
	if(b[2] == 'A'||b[2] == 'C'||b[2] == 'B') l = 1;
	else r = 1;
	if(d[2] == 'A'||d[2] == 'C'||d[2] == 'B') l1 = 1;
	else r1 = 1;
	
	if(l == l1&&r == r1&&b1) c1 = 1;
	
	if(c1){
		if(b[2] == 'B'||d[2] == 'B') d1 = 1;
	}
	
	cout << a1 << b1 << c1 << d1;
	return 0;
}
