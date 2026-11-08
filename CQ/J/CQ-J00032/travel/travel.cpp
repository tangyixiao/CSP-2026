#include <bits/stdc++.h>
using namespace std ;
string r_x , x_x ; 
string r_z , x_z ;

int x_in , r_in ;
int r_f , x_f ;

bool f ;
int main(){
	freopen("travel.in","r",stdin) ;
	freopen("travel.out","w",stdout) ;
	cin >> r_x >> r_z >> x_x >> x_z ;
	if(r_z[2] == 'A' || r_z[2] == 'B' || r_z[2] == 'C'){
		r_f = 1 ;
	}
	
	if(x_z[2] == 'A' || x_z[2] == 'B' || x_z[2] == 'C'){
		x_f = 1 ;
	}
	
	if(r_x == x_x){
		cout << 1 ; 
		f = 1 ;
	}else{
		cout << 0 ;
	}
	
	r_in = int( ( r_z[0] - '0' ) * 10 + ( r_z[1] - '0' ) ) ;
	x_in = int( ( x_z[0] - '0' ) * 10 + ( x_z[1] - '0' ) ) ;
	if(r_in == x_in && f){
		cout << 1 ;
	}else {
		cout << 0 ;
		f = 0 ;
	}
	if(x_f == r_f && f){
		cout << 1 ;
	}else{
		cout << 0 ;
		f = 0 ;
	}
	if(abs( r_z[2] - x_z[2] ) == 1 && f){
		cout << 1 ;
	}else{
		cout << 0 ;
	}
	return 0 ;
} 
