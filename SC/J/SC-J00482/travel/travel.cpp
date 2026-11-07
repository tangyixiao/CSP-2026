#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef double db;
string S1, S2, C1, C2;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> S1 >> S2 >> C1 >> C2;
	if(S1 == C1){
		printf("1");
		if(S2[0] == C2[0] && S2[1] == C2[1]){
			printf("1");
			if(S2[2] == 'A' && C2[2] == 'B' || 
			   S2[2] == 'B' && C2[2] == 'A' ||
			   S2[2] == 'C' && C2[2] == 'B' || 
			   S2[2] == 'B' && C2[2] == 'C' ||
			   S2[2] == 'D' && C2[2] == 'F' || 
			   S2[2] == 'F' && C2[2] == 'D')
				printf("11");
			else if(S2[2] == 'C' && C2[2] == 'A' ||
					S2[2] == 'A' && C2[2] == 'C')
				printf("10");
			else printf("00");
		} else printf("000");
	} else printf("0000");
	return 0;
}