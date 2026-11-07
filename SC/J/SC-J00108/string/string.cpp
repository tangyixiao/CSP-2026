#include <iostream>
#include <string>
using namespace std ;
int main(){
	freopen("string.in","r",stdin) ;
	freopen("string.out","w",stdout);
	int n ;
	cin >> n ;
	if(n == 1){
		cout << 0 ;
	}
	if(n == 2){
		int ai ;
		cin >> ai ;
		cout << ai ;
	}
} 