#include<bits/stdc++.h>

using namespace std;
/*
scanf("%d", &x);
printf("%d", x);
*/
string rc, rs, xc, xs;

int gett(char x){
	if(x == 'A' || x == 'B' || x == 'C') return 0;
	return 1; 
}

int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w",stdout);
	
	cin >> rc >> rs >> xc >> xs;
	
//	cout << rc << ' ' << rs << ' ' << xc << ' ' << xs << '\n'; 
	
	if(rc == xc){
		cout << '1';
		
		if(rs[0] == xs[0] && rs[1] == xs[1]){
			cout << '1';
			
			if(gett(rs[2]) == gett(xs[2])){
				cout << '1';
				
//				cout << gett(rs[2]) << ' ' << gett(xs[2]) << '\n';
				
				if(gett(rs[2]) == 1){
					if(rs[2] > xs[2]) swap(rs[2], xs[2]);
					if((rs[2] == 'D') && (xs[2] == 'F')){
						cout << '1'; 
					}else{
						cout << '0';
					}
				}else{
					if(rs[2] > xs[2]) swap(rs[2], xs[2]);
//					cout << rs[2] << ' ' << xs[2] << '\n';
					if((rs[2] == 'A' && xs[2] == 'B') || (rs[2] == 'B' && xs[2] == 'C')){
						cout << '1';
					}else{
						cout << '0';
					}
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

15 18B 15 18D
*/
