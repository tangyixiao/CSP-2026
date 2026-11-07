#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 == c2){
		bool tyh = true;
		for (int i = 0;i < 2;i++){
			if (s1[i] != s2[i]) tyh = false;
		}
		if (tyh){
			if (s1[2] == 'A' || s1[2] == 'B' || s1[2] == 'C'){
				if (s2[2] == 'A' || s2[2] == 'B' || s2[2] == 'C'){
					if (s1[2] == 'B' || s2[2] == 'B') printf("1111");
					else printf("1110");
				}
				else printf("1100");
			}
			else{
				if (s2[2] == 'D' || s2[2] == 'F'){
					printf("1111");
				}
				else printf("1100");
			}
		}else{
			printf("1000");
		}
	}else {
		printf("0000");
	}
	return 0;
}