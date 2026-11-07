#include <iostream>
#include <stdio.h>
using namespace std;




int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	
	char a[10][10]={};
	for(int i=1;i<=4;i++){
		cin >> a[i];
	}
	cout <<(a[1][0]==a[3][0] && a[1][1]==a[3][1]) 
		 << (a[2][0]==a[4][0] && a[2][1]==a[4][1]);
	bool b=0;
	if(a[2][0]==a[4][0] && a[2][1]==a[4][1])
		if('A'<=a[2][2] && a[2][2]<='C'){
			if('A'<=a[4][2] && a[4][2]<='C'){
				cout << 1;
				b=1;
			}else{
				cout << 0;
			}
		}else if('D'<=a[2][2] && a[2][2]<='E'){
			if('D'<=a[4][2] && a[4][2]<='E'){
				cout << 1;
				b=1;
			}else{
				cout << 0;
			}
		}
	else{
		cout << 0;
	}	
	if(b){
		if(a[2][2]-a[4][2]==1 || a[4][2]-a[2][2]==1){
			cout << 1;
		}else{
			cout <<0;
		}
	}
	return 0;
}