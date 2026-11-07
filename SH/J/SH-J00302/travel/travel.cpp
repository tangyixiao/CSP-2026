# include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);// 
	freopen("travel.out","w",stdout);// 
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1==c2){
		cout << '1';
		if (s1[0]==s2[0] && s1[1]==s2[1]){
			cout << '1';
			int x=(s1[2]-'A'),y=(s2[2]-'A');
			if ((x<3 && y<3)||(x>=3 && y>=3)){
				cout << '1';
				if (abs(x-y)==1){
					cout << '1';
				}
				else{cout << '0';}
			}
			else{cout << "00";}
		}
		else{cout << "000";}
	}
	else{cout << "0000";}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
/*
02 01A 02 01B
02 01C 02 01A
02 01C 02 01D
02 02B 02 01A
02 01A 03 01A
*/
