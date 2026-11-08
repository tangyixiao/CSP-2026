#include <bits/stdc++.h>
using namespace std;

int c1, c2, cnt;
string s1, s2, s3, s4;

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);	

	cin >> c1 >> s1 >> c2 >> s2;
	s3 = s3 + s1[0] + s1[1];
	s4 = s4 + s2[0] + s2[1];


	
	if(c1 == c2){
		cout<< 1;
	}
	else{
		cout<< 0;
	}

	
	if(c1 == c2 && s3 == s4){
		cout<< 1;
	}
	else{
		cout<< 0;
	}
	
	
	if(c1 == c2 && s3 == s4 &&
	( (s1[2] >= 'D' && s2[2] >= 'D') or
	  (s1[2] < 'D' && s2[2] < 'D')
	))
	 {
		cout<< 1;
	}
	else{
		cout<< 0;
	}
	
	cnt = (c1 == c2 && s3 == s4 &&
	( (s1[2] >= 'D' && s2[2] >= 'D') or
	  (s1[2] < 'D' && s2[2] < 'D')
	));

	if(cnt && (s1[2] + 1 == s2[2]+0) or (s1[2] - 1 == s2[2]+0)){
		cout<< 1;}
	else{
		cout<< 0;}
	

	return 0;
}
