#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin >> c1 >> s1 >> c2 >> s2;
	if(c1==c2){
		cout << "1";
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
			cout << "1";
			int a=s1[2]-'A';
			int b=s2[2]-'A';
			if(b==5){
				b=4;
			}
			if((a==2&&b==3)||(a==3&&b==2)){
				cout << "00";
				return 0;
			}
			if((a>=0&&a<=2)&&(b>=0&&b<=2)){
				cout << "1";
				if(abs(a-b)==1){
					cout << "1";
				}else{
					cout << "0";
				}
			}else if((a>=3&&a<=4)&&(b>=3&&b<=4)){
				cout << "11";
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