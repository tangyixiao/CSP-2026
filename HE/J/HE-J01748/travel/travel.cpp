#include<bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	long long n;
	string s;
	cin >> n;
	cin >> s;
	long long m;
	string s1;
	cin >> m;
	cin >> s1;
	
	if(n != m){
		cout << "0000";
		return 0;
	}else{
		cout << "1";
	}
	bool f = false;
	for(int i = 0; i < 2; i++){
		if(s[i] == s1[i]){
			f = true;
		}else{
			f = false;
		}
	}
	if(f == false){
		cout << "000";
		return 0;
	}else{
		cout << "1";
	}
	
	if(s[2] >= 'D' && s1[2] <= 'C'){
		cout << "00";
		return 0;
	}else if(s1[2] >= 'D' && s[2] <= 'C'){
		cout << "00";
		return 0;
	}
	if(s[2] <= 'C' && s[2] >= 'A'){
		if(s[2] <= 'C' && s[2] >= 'A'){
			cout << "1";
		}else{
			cout << "00";
			return 0;
		}
	}
	else if(s[2] <= 'F' || s[2] >= 'D'){
		if(s1[2] <= 'F' || s1[2] >= 'D'){
			cout << "1";
			return 0;
		}
	}else{
		cout << "00";
		return 0;
	}
	
	char c = s1[2] - 1;
	if(c == s[2]){
		cout << "1";
		return 0;
	}
	
	char c1 = s[2] - 1;
	if(c == s1[2]){
		cout << "1";
		return 0;
	}else{
		cout << "0";
		return 0;
	}
	return 0;
}
