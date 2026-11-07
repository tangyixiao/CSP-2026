#include <iostream>
#include <string>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	int c_1,c_2,s_1,s_2,a1,b1;
	c_1 = (c1[0] - '0') * 10 + (c1[1] - '0');
	c_2 = (c2[0] - '0') * 10 + (c2[1] - '0');
	s_1 = (s1[0] - '0') * 10 + (s1[1] - '0');
	s_2 = (s2[0] - '0') * 10 + (s2[1] - '0');
	a1 = s1[2] - 'A';
	b1 = s2[2] - 'A';
	bool flag = false;
	if(c_1 == c_2){
		cout << 1;
		flag = true;
	}
	else{
		cout << 0;
	}
	if(s_1 == s_2 && flag == true){
		cout << 1;
		flag = true;
	}
	else{
		cout << 0;
		flag = true;
	}
	if(a1-b1 <= 3 && flag == true&&(a1+b1 <= 3 || a1 + b1 == 8)){
		cout << 1;
	}
	else{
		cout << 0;
		flag = false;
	}
	if((a1 - b1 == 1 || a1 - b1 == -1) && ((a1 != 2 || b1 != 2) || (a1 != 3 || b1 != 3)) && flag == true){
		cout << 1;
	}
	else if((a1 == 3 || b1 == 3) && (a1 == 5 || b1 == 5) && flag == true){
		cout << 1;
	}
	else{
		cout << 0;
	}
	return 0;
}
