#include<bits/stdc++.h>
using namespace std;
string s1, s2, s3, s4;
bool check(char A, char B){
	if(A > B) swap(A, B);
	if((A == 'A' && B == 'B') || (A == 'D' && B == 'F') || (A == 'B' && B == 'C'))
		return true;
	return false;
}
bool cmp(char A, char B){
	return ((A <= 'C' && B <= 'C') || (A >= 'D' && B >= 'D')); 
}
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin >> s1 >> s2 >> s3 >> s4;
	cout << (s1 == s3);
	cout << (((s2[0] == s4[0]) && (s2[1] == s4[1])) && (s1 == s3));
	cout << (((s2[0] == s4[0]) && (s2[1] == s4[1])) && (s1 == s3) && cmp(s2[2], s4[2]));
	cout << (((s2[0] == s4[0]) && (s2[1] == s4[1])) && (s1 == s3) && cmp(s2[2], s4[2]) && check(s2[2], s4[2]));
	return 0; 
} 
