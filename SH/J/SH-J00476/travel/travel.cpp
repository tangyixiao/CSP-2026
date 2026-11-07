#include <bits/stdc++.h>
using namespace std;

char c1[10], s1[10], c2[10], s2[10], ch;

int main() {
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w",stdout);
	for (int i = 1; i <= 2; i++) scanf("%c", &c1[i]);
	scanf("%c", &ch);
	for (int i = 1; i <= 3; i++) scanf("%c", &s1[i]);
	scanf("%c", &ch);
	for (int i = 1; i <= 2; i++) scanf("%c", &c2[i]);
	scanf("%c", &ch);
	for (int i = 1; i <= 3; i++) scanf("%c", &s2[i]);
	if (c1[1] == c2[1] && c1[2] == c2[2]){
		printf("1");
		if (s1[1] == s2[1] && s1[2] == s2[2]) {
			printf("1");
			if ((s1[3] <= 'C' && s2[3] <= 'C') || (s1[3] > 'C' && s2[3] > 'C')) {
				printf("1");
				int a = s1[3] - 'A', b = s2[3] - 'A';
				if (abs(a - b) == 1) printf("1");
				else printf("0");
			}
			else printf("00");	
		}
		else printf("000");
	} 
	else printf("0000");
	 
	return 0;
}
