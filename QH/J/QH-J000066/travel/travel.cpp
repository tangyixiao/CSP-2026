#include<bits/stdc++.h>
using namespace std;

char s[20];
bool f1, f2, f3;

int main(){
	freopen("travel.in" ,"r", stdin);
	freopen("travel.out","w", stdout);
	for(int i = 1; i <= 13; i++) scanf("%c", &s[i]);
	if(s[1] == s[8] && s[2] == s[9]) f1 = 1;
	else f1 = 0;
	if(f1 && s[4] == s[11] && s[5] == s[12]) f2 = 1;
	else f2 = 0;
	if(f2 && s[6] <= 'C' && s[13] <= 'C' || s[6] >= 'D' &&
	 s[13] >= 'D') f3 = 1;
	else f3 = 0;
	if(s[6] == 'F') s[6]--;
	if(s[13] == 'F') s[13]--;
	if(f1) printf("1");
	else printf("0");
	if(f2) printf("1");
	else printf("0");
	if(f3) printf("1");
	else printf("0");
	if(f3 && abs(s[6] - s[13]) == 1) printf("1");
	else printf("0");
	return 0;
}
