#include<bits/stdc++.h>
using namespace std;
string c,s,C,S;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c >> s >> C >> S;
	int F = (c == C);
	printf("%d",F);
	F &= ((s[0] == S[0]) && (s[1] == S[1]));
	printf("%d",F);
	F &= ((s[2] <= 'C') == (S[2] <= 'C'));
	printf("%d",F);
	F &= (abs(s[2] - S[2]) == 1);
	printf("%d",F);
	fclose(stdin);
	fclose(stdout);
	return 0;
}