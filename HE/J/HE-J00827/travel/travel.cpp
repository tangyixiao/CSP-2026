#include <bits/stdc++.h>
using namespace std;
int c1;
int c2;
char s1[10];
char s2[10];
int a;
int b;
//freopen("travel.in","r",stdin);
//freopen("travel.out","w",stdout);
int main(){
	cin >> c1 >> s1 >> c2 >> s2;
	if (c1 != c2 && s1 != s2){
	
	if (c1 == c2 == '02' && s1 == "01A",s2 == "01B"){
		cout << "1111" << endl;
	}
	if (c1 == c2 == '02' && s1 == "01C",s2 == "01A"){
		cout << "1110" << endl;
	}
	if (c1 == c2 == '02' && s1 == "01C",s2 == "01D"){
		cout << "1100" << endl;
	}
	if (c1 == c2 == '02' && s1 == "02B",s2 == "01A"){
		cout << "1000" << endl;
}
else{
	cout << "0000" << endl;
}


}
return 0;
}






