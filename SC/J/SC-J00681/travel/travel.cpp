#include <bits/stdc++.h>
using namespace std;
string c1,c2,c3,c4;
bool z1,z2,z3,z4;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	cin >> c1 >> c2 >> c3 >> c4;
	if(c1 == c3){
		z1 = 1;
		if(c2[0] == c4[0] && c2[1] == c4[1]){
			z2 = 1;
			if((c2[2] <= 'C' && c4[2] <= 'C') || (c2[2] >= 'D' && c4[2] >= 'D')){
				z3 = 1;
				if((c2[2] + 1 == c4[2]) || (c2[2] - 1 == c4[2]))    z4 = 1;
			}
		}
	}
	
	cout << z1 << z2 << z3 << z4;
	
	return 0;
} 