#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in" , "r" , stdin);
	freopen("travel.out" , "w" , stdout);
	int flag1 = 0 , flag2 = 0 , flag3 = 0 , flag4 = 0 , left = 0 , right = 0;
	string s1 , s2 , s3 , s4;
	cin >> s1 >> s2 >> s3 >> s4;
	for(int i = 0; i < 2; i++){
		if((int)s1[i] == (int)s3[i]){
			flag1 = 1;
		}
		else{
			flag1 = 0;
		}
	}
	if(flag1 == 1){
		for(int i = 0; i < 3; i++){
			if(i < 2){
				if((int)s2[i] == (int)s4[i]){
					flag2 = 1;
				}
				else{
					flag2 = 0;
				}
			}
			if(i == 2){
				s2 = s2[i];
				s4 = s4[i];
			}
		}
	}
	if(flag2 == 1){
		if(s2 > "C" && s4 > "C"){
			flag3 = 1;
			right = 1;
		}
		if(s2 <= "C" && s4 <= "C"){
			flag3 = 1;
			left = 1;
		}
	}
	if(flag3 == 1){
		if(left == 1){
			if(s2 == "A" || s2 == "C"){
				if(s4 == "B"){
					flag4 = 1;
				}
			}
			if(s2 == "B"){
				flag4 = 1;
			}
		}
		if(right == 1){
			flag4 == 1;
		}
	}
	if(flag1 == 1 && flag2 == 0 && flag3 == 0 && flag4 == 0){
		cout << "1000";
	}
	if(flag1 == 1 && flag2 == 1 && flag3 == 0 && flag4 == 0){
		cout << "1100";
	}
	if(flag1 == 1 && flag2 == 1 && flag3 == 1 && flag4 == 0){
		cout << "1110";
	}
	if(flag1 == 1 && flag2 == 1 && flag3 == 1 && flag4 == 1){
		cout << "1111";
	}
	if(flag1 == 0 && flag2 == 0 && flag3 == 0 && flag4 == 0){
		cout << "0000";
	}
	return 0;
}