#include<bits/stdc++.h>
using namespace std;
int c1, c2;
char s1[10], s2[10];
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out","w", stdout);
	scanf("%d%s%d%s", &c1, s1, &c2, s2);
	if(c1 == c2){
		printf("1");
		int line1 = s1[0] * 10 + s1[1], line2 = s2[0] * 10 + s2[1];
		if(line1 == line2){
			printf("1");
			int seat1 = s1[2] - 'A', seat2 = s2[2] - 'A';
			if(seat1 <= 2 && seat2 <= 2){
				printf("1");
				int left = min(seat1, seat2), right = max(seat1, seat2);
				if(right - left == 1) printf("1");
				else printf("0");
			}else if(seat1 >= 3 && seat2 >= 3){
				printf("1");
				int left = min(seat1, seat2), right = max(seat1, seat2);
				if(right - left == 1) printf("1");
				else printf("0");
			}else printf("00"); 
		}else printf("000");
	}
	else printf("0000");
	return 0;
} 
