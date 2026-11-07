#include <bits/stdc++.h>
using namespace std;

int c, C;
char s[20], S[20];

int main(){
	freopen ("travel.in", "r", stdin);
	freopen ("travel.out", "w", stdout);
	scanf ("%d%s%d%s", &c, s + 1, &C, S + 1);
	if (c == C){
		if ((s[1] - '0') * 10 + s[2] - '0' == (S[1] - '0') * 10 + S[2] - '0'){
			if ((s[3] < 'D' && S[3] < 'D') || (s[3] > 'C' && S[3] > 'C')){
				if (abs (s[3] - S[3]) == 1){
					printf ("1111");
				}
				else{
					printf ("1110");
				}
			}
			else{
				printf ("1100"); 
			}
		}
		else{
			printf ("1000"); 
		}
	}
	else{
		printf ("0000"); 
	}
	return 0;
}