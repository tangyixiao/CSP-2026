#include<bits/stdc++.h>
using namespace std;
int a , b ;
string s1 , s2 , x , y ;
char n , m ;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> a >> s1 >> b >> s2 ;
	if(a != b){
		cout << "0000" ;
		return 0;
	}
	cout << 1 ;
	for(int i = 0 ; i < 2 ; i++){
        x += s1[i] ;
        y += s2[i] ;
	}
	if(x != y){
		cout << "000" ;
		return 0;
	}
	cout << 1 ;
	n = s1[2] ;
	m = s2[2] ;
	if(((n == 'A' || n == 'B' || n == 'C') && (m == 'D' || m == 'F')) || ((n == 'D' || n == 'F') && (m == 'A' || m == 'B' || m == 'C'))){
		cout << "00" ;
		return 0;
	}
	cout << 1 ;
	if((n == 'A' && m == 'B') || (n == 'B' && m == 'C') || (n == 'B' && m == 'A') || (n == 'C' && m == 'B') || (n == 'D' && m == 'F') || (n == 'F' && m == 'D')){
		cout << 1 ;
	}else{
		cout << 0 ;
	}
	return 0;
}