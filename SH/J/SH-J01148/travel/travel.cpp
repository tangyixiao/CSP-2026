#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
int main(){
	freopen("travel5.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1!=c2){//1
		cout << 0 << 0 << 0 << 0;
	}
	else{
		cout << 1;
		if(s1[0] == s2[0] && s1[1] == s2[1]){//2
			cout << 1;
			if('A' <= s1[2] && s1[2] <= 'C' && 'A' <= s2[2] && s2[2] <= 'C'){//3
				cout << 1;
				if(abs(s1[2]-s2[2])==1){//4
					cout << 1;
				}
				else{
					cout << 0;
				}
			}
			else if('D' == s1[2] && s2[2] == 'F' || 'D' == s2[2] && s1[2] == 'F'){//3
				cout << 1 << 1;
			}
			else{
				cout << 0 << 0;
			}
		}
		else{
			cout << 0 << 0 << 0;
		}
	}
	return 0;
}
