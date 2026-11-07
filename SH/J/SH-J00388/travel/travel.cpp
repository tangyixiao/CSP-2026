#include<bits/stdc++.h> 
using namespace std;
string a_1,s_1,a_2,s_2; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a_1 >> s_1 >> a_2 >> s_2;
	//q1
	if(a_1 == a_2){
		cout << "1";
		//q2
		if(s_1[0] == s_2[0]&&s_1[1] == s_2[1]){
			cout << "1";
			//q3
			char c_1 = s_1[2],c_2 = s_2[2];
			if((c_1 <= 'C'&&c_2 <= 'C')||(c_1 >= 'D'&&c_2 >= 'D')){
				cout << "1";
				if(c_1 + 1 == c_2||c_1 - 1 == c_2){
					cout << "1";
				}
				else {
					cout << "0";
				}
			}
			else {
				cout << "00";
			}
		}
		else {
			cout << "000";
		}
	}
	else {
		cout << "0000";
	}
	return 0;
}
