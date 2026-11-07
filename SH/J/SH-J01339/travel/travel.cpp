#include<bits/stdc++.h>
using namespace std;

string c1, s1, c2, s2; 

bool i_t = 1;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> c1;
	cin >> s1;
	cin >> c2;
	cin >> s2;
	
	if(c1 == c2) {
		printf("1");
	} else {
		printf("0");
		i_t = 0;
	}
	if(s1[0] == s2[0] && s1[1] == s2[1] && i_t == 1) {
		printf("1"); 
	} else {
		printf("0");
		i_t = 0;
	}
	if((s1[2] == 'A' && s2[2] == 'B' && i_t == 1) || (s1[2] == 'B' && s2[2] == 'A' && i_t == 1) || (s1[2] == 'A' && s2[2] == 'C' && i_t == 1) || (s1[2] == 'C' && s2[2] == 'A' && i_t == 1) || (s1[2] == 'C' && s2[2] == 'B' && i_t == 1) || (s1[2] == 'B' && s2[2] == 'C' && i_t == 1) || (s1[2] == 'D' && s2[2] == 'F' && i_t == 1) || (s1[2] == 'F' && s2[2] == 'D' && i_t == 1)) {
	  	printf("1");
	} else {
		printf("0");
		i_t = 0;
	}
	if((s1[2] == 'A' && s2[2] == 'B' && i_t == 1)|| (s1[2] == 'B' && s2[2] == 'A' && i_t == 1 )|| (s1[2] == 'C' && s2[2] == 'B' && i_t == 1 )|| (s1[2] == 'B' && s2[2] == 'C' && i_t == 1 )|| (s1[2] == 'D' && s2[2] == 'F' && i_t == 1 )||( s1[2] == 'F' && s2[2] == 'D' && i_t == 1) ) {
	  	printf("1");
	} else {
		printf("0");
	}
    return 0;
}
