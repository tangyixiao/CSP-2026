#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define ull unsigned long long

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	
	string s1, s2, s3, s4;
	int k1, k2;
	cin >> s1 >> s2 >> s3 >> s4;
	if(s1 == s3){
		printf("%d", 1);
		if(s2[0] == s4[0] && s2[1] == s4[1]){
			printf("%d", 1);
			k1 = int(s2[2] - 'A');
			k2 = int(s4[2] - 'A');
			if(k1 <= 2 && k2 <= 2 || k1 >= 3 && k2 >= 3){
				printf("%d", 1);
				if(abs(k1 - k2) == 1) printf("%d", 1);
				else printf("%d", 0); 
			} else printf("%d%d", 0, 0);
		} else printf("%d%d%d", 0, 0, 0);
	} else printf("%d%d%d%d", 0, 0, 0, 0);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
