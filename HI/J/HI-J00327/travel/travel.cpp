#include <iostream>
using namespace std;


int main()
{
	freopen("travel.in","r",stdin);
	feropen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1 == c2){
		if(s1[0] == s2[0]){
			if(s1[1] == s2[1]){
				if(s1[2] == "A"||"B"||"C" ){
					if(s2[2] == "A"||"B"||"C" ){
						if(s1[2] == "A"){
							if(s2[2]"B"){
								cout << 1111;
							}
							else {
								cout << 1110;
							}
						}
						if(s1[2] == "B"){
							if(s2[2]"C"||"A"){
								cout << 1111;
							}
							else {
								cout << 1110;
							}
						}
						if(s1[2] == "C"){
							if(s2[2]"B"){
								cout << 1111;
							}
							else {
								cout << 1110;
							}
						}
					}
					else{
						cout << 1100;
					}
				}
				if(s1[2] == "D"||"F" ){
					if(s2[2] == "D"||"F" ){
						if(s1[2] == "D"){
							if(s2[2]"F"){
								cout << 1111;
							}
							else {
								cout << 1110;
							}
						}
						if(s1[2] == "F"){
							if(s2[2]"D"){
								cout << 1111;
							}
							else {
								cout << 1110;
							}
						}
					}
					cout << 1100;
				}
				else {
					cout << 1100;
				}
			}
			else{
				cout << 1000;
			}	
		}
		else{
			cout << 0000;
		}
	}
	else{
		cout << 0000;
	}
	return 0;
}
