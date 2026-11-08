#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

int num1,num2;
char a1[10],b1[10],a2[10],b2[10];

int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	scanf("%s%s%s%s",a1+1,b1+1,a2+1,b2+1);
	if (a1[1] == a2[1] && a1[2] == a2[2]) {
		printf("1");
		for (int i = 1;i <= 2;i++) {
			num1 = num1*10 + b1[i]-'0';
			num2 = num2*10 + b2[i]-'0';
		}
		if (num1 == num2) {
			printf("1");
			int temp1 = 0,temp2 = 0;
			if (b1[3] == 'A' || b1[3] == 'B' || b1[3] == 'C') temp1 = 1;
			if (b1[3] == 'D' || b1[3] == 'F') temp1 = 2;
			if (b2[3] == 'A' || b2[3] == 'B' || b2[3] == 'C') temp2 = 1;
			if (b2[3] == 'D' || b2[3] == 'F') temp2 = 2;
			if (temp1 == temp2) {
				printf("1");
				if (abs(b1[3]-b2[3]) == 1) printf("1");
				else printf("0");
			} else printf("00");
		} else printf("000");
	} else printf("0000");
	fclose(stdin);
	fclose(stdout);
	return 0;
}
