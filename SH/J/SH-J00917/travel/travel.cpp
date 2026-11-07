#include<bits/stdc++.h>
using namespace std;
string ca,sa,cb,sb,ans;
int main() {
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> ca>>sa>>cb>>sb;
	if(ca==cb){
		ans = ans + '1';
	}else {
		cout << "0000";
		return 0;
	}
	string numa = sa.substr(0,2);
	string numb = sb.substr(0,2);
	if(numa == numb){
		ans = ans + '1';
	}else{
		cout << "1000";
		return 0;
	}
	char alpa = sa[2];
	char alpb = sb[2];
	if(numa == numb){
		if((alpa >= 'A'&&alpa <='C'&&alpb >= 'A'&&alpb <='C')||(alpa >= 'D'&&alpa <='F'&&alpb >= 'D'&&alpb <='F')){
			ans = ans + '1';
		}else{
			cout << "1100";
			return 0;
		}
	}
	if(numa == numb){
		if(alpa >= 'A'&&alpa <='C'&&alpb >= 'A'&&alpb <='C'){
			if(alpa + 1 == alpb || alpa - 1 == alpb){
				ans = ans + '1';
				cout << "1111";
				return 0;
			}
		}else if(alpa >= 'D'&&alpa <='F'&&alpb >= 'D'&&alpb <='F'){
			if((alpa == 'D'&&alpb == 'F')|| (alpa == 'F'&&alpb == 'D')){
				ans = ans + '1';
				cout << "1111";
				return 0;
			}
		}
		cout << "1110";
		return 0;
		
	}
	return 0;
}
