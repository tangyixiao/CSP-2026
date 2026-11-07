#include <bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;
int xiang=0,pai=0,ce=0,lin=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	cin >>c1>>s1>>c2>>s2;
	if (c1==c2){
		xiang=1;
		int a=(s1[0]-'0'*10)+(s1[1]-'0'),b=(s2[0]-'0'*10)+(s2[1]-'0');
		char pa = s1[2],pb = s2[2];
		if (a==b){
			pai=1;
			if (pa < 'D'&& pb < 'D'){
				ce = 1;
				if (pa-pb == 1 || pb-pa == 1){
					lin = 1;
				}
			}
			if (pa > 'C'&& pb > 'C'){
				ce = 1;
				lin = 1;
			}
		}
	}
	
	cout << xiang << pai << ce << lin;
	
	
	return 0;
}
