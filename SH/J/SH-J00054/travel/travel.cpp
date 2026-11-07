#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

string c1,s1,c2,s2;

int main(){
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin >> c1 >> s1 >> c2 >>s2;
	if(c1 == c2){
		cout << "1";
		if(s1[0] == s2[0] && s1[1] == s2[1]){
			cout << "1";
			if((s1[2] > 'C' && s2[2] > 'C') || (s1[2] <= 'C' && s2[2] <= 'C')){
				cout << "1";
				char a,b;
				if(s1[2] == 'F'){
					a = 'E';
				}else{
					a = s1[2];
				}
				if(s2[2] == 'F'){
					b = 'E';
				}else{
					b = s2[2];
				}
				if((a - b == 1) || (b - a == 1)){
					cout << "1";
				}else{
					cout << "0";
				}
			}else{
				cout << "00";
			}
		}else{
			cout << "000";
		}
	}else{
		cout << "0000";
	}
	
	return 0;
}
