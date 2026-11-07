#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	int cx1,cx2;
	cx1=(c1[1]-'0')+(c1[0]-'0')*10;
	cx2 = (c2[1] - '0')+(c2[0]-'0')*10;
	int zw1,zw2;
	zw1 = (s1[0]-'0')+(s1[1]-'0')*10;
	zw2 = (s2[0]-'0')+(s2[1]-'0')*10;
	int z1,z2;
	z1 = s1[2]-'A'+1;
	z2 = s2[2] - 'A' + 1;
	int a1=0,a2=0,a3=0,a4=0;
	if(cx1 == cx2){
		a1 = 1;
		if(zw1 == zw2){
			a2 = 1;
			if(z1 <= 3 && z2 <= 3 || z1 > 3 && z2 > 3){
				a3 = 1;
				if(abs(z2 - z1) == 1 || z1 == 4 && z2 == 6 || z1 == 6 && z2 == 4){
					a4 = 1;
				}
			}
		}
	}
	cout << a1 << a2 << a3 << a4;
	return 0;
}
