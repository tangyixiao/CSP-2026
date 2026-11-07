#include <bits/stdc++.h>
#define ll long long
using namespace std;

bool ch(char a,char b){
	if(a == 'A' && b == 'B') return 1;
	if(a == 'B' && b == 'C') return 1;
	if(a == 'B' && b == 'A') return 1;
	if(a == 'C' && b == 'B') return 1;
	return 0;
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	ios::sync_with_stdio(0);
	cin.tie(0),cout.tie(0);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	bool f1 = 0,f2 = 0,f3_1 = 0,f3_2 = 0;
	if(c1 == c2){
		cout << '1';
		f1 = 1;
	}else{
		cout << '0';
	}
	
	if(f1){
		char ss1,ss2;
		ss1 = s1[0]+s1[1];
		ss2 = s2[0]+s2[1];
		if(ss1 == ss2){
			cout << '1';
			f2 = 1;
		}else{
			cout << '0';
		}
	}else{
		cout << '0';
	}
	
	if(f2){
		char w1,w2;
		w1 = s1[2];
		w2 = s2[2];
		if(w1 >= 'A' && w1 <= 'C' && w2 >= 'A' && w2 <= 'C'){
			cout << '1';
			f3_1 = 1;
		}else if(w1 >= 'D' && w1 <= 'F' && w2 >= 'D' && w2 <= 'F'){
			cout << '0';
			f3_2 = 1;
		}else{
			cout << '0';
		}
	}else{
		cout << '0';
	}
	
	if(f3_1){
		char w1,w2;
		w1 = s1[2];
		w2 = s2[2];
		if(ch(w1,w2)){
			cout << '1';
		}else{
			cout << 0;
		}
	}else if(f3_2){
		cout << '1';
	}else{
		cout << '0';
	}
	return 0;
}