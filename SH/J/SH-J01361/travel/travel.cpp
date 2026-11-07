#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 != c2){
		printf("0000");
	} else {
		printf("1");
		int p1 = (s1[0] - '0') * 10 + (s1[1] - '0');
		int p2 = (s2[0] - '0') * 10 + (s2[1] - '0');
		if(p1 != p2){
			printf("000"); 
		} else {
			printf("1");
			char r1 = s1[2],r2 = s2[2];
			if((r1 <= 'C' && r2 >= 'D') || (r1 >= 'D' && r2 <= 'C')){
				printf("00");
			} else {
				printf("1");
				if(r1 <= 'C'){
					printf(abs(r1 - r2) == 1 ? "1" : "0");
				} else {
					printf("1");
				}
			}
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}

