#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int a = 0,b = 0,c = 0,d = 0;
	string x,y;cin >> x >> y;
	string f,g;cin >> f >> g;
	if ( x == f ){
		a = 1;
		if ( y[0] == g[0] && y[1] == g[1] ){
			b = 1;
			if ( ( y[2] >= 'A' && y[2] <= 'C' ) && ( g[2] >= 'A' && g[2] <= 'C' ) ){
				c = 1;
				if ( g[2] == 'B' ){
					d = 1;
				}
				else if ( y[2] == 'B' ){
					d = 1;
				}
           	}
			else if ( ( y[2] == 'D' || y[2] == 'F' ) && ( g[2] == 'D' || g[2] == 'F' ) ){
				c = 1;
				d = 1;
			}
		}
	}
	cout << a << b << c << d;
	return 0;
}
