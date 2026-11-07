#include<bits/stdc++.h>
using namespace std ;
string r1 , x1 , r2 , x2 ;
bool check1(string a ,string b){
	if(a[2] == 'A'||a[2] == 'B'||a[2] == 'C'){
		if(b[2] == 'A'||b[2] == 'B'||b[2] == 'C')return 1 ;
		return 0 ;
	}else{
		if(b[2] == 'D'||b[2] == 'F')return 1 ;
		return 0 ;
	}
}
bool check2(string a ,string b){
	if(a[2]+1 == b[2] || a[2]-1 == b[2])return 1 ;
	return 0 ;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);

	cin >> r1 >> r2 >> x1 >> x2 ;
	if(r1 != x1){cout << "0000" ;}
	else{
		cout << "1" ;
		if(r2[0] != x2[0] || r2[1] != x2[1]){cout << "000";}
		else{
			cout << "1" ;
			if(!check1(r2,x2)){cout << "00";}
			else{
				cout << "1" ;
				if(!check2(r2,x2)){cout << "0";}
				else{cout << "1";}
			}
		}
	}

	fclose(stdin) ;
	fclose(stdout);
	return 0 ;
}
