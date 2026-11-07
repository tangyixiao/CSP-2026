#include<bits/stdc++.h>
using namespace std;
int main(){
	int c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	for (int i = c1;i <= 1;i++){
		for (int i = c1;i < 16;i++){
		}
		for (int i = c2;i >= 1;i++){
			for (int i = c2;i <= 16;i++){
				if (c1 == c2){
					cout << "1" << " ";
				}else{
					cout <<"0" << " ";
				}
			}
		}
	}
	for (int i = s1;i >= 1;i++){
		for (int i = s1;i <= 18;i++){
		}
		for (int i = s2;i >= 1;i++){
			for (int i = s2;i <= 18;i++){
				if(s1 == s2){
					cout << "1" << " ";
				}else{
					cout << "0" << " ";
				}
			}
		}
	}
	return 0;
}