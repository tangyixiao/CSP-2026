#include<bits/stdc++.h>
using namespace std;
string c1 , s1 , c2 , s2;
int main(){
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	
	cin >> c1 >> s1 >> c2 >> s2;
	cout << int(c1 == c2);
	int num1 = 0 , num2 = 0;
	for(int i = 0 ; i <= 1 ; i++){
		num1 = num1 * 10 + s1[i] - '0';
		num2 = num2 * 10 + s2[i] - '0'; 
	}
	cout << int(num1 == num2 && c1 == c2);
	char x , y;
	x = s1[2] , y = s2[2];
	int f3 = 0;
	if(num1 != num2 || c1 != c2) f3 = 0;
	else{
		if('A' <= x && x <= 'C'){
			if('A' <= y && y <= 'C') f3 = 1;
			else f3 = 0;
		} 
		else{
			if('A' <= y && y <= 'C') f3 = 0;
			else f3 = 1;
		}
	}
	cout << f3;
	if(x > y) swap(x , y);
	if(c1 != c2 || num1 != num2 || f3 == 0) cout << 0;
	else{
		if(y == x + 1){
			if(y == 'D') f3 = 0;
			else f3 = 1;
		}
		else f3 = 0;
		cout << f3;	
	}
	return 0;
	//期望得分：100pts 
}
