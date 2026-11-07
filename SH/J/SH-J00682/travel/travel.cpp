#include <bits/stdc++.h>
using namespace std ;

int main(){
	freopen("travel.in","r",stdin) ;
	freopen("travel.out","w",stdout) ;
	char s[20] ;
	for(int i = 1 ; i <= 13 ; i++){
		scanf("%c",&s[i]) ;
	}
	int cnt1 , cnt2 , cnt3 , cnt4 ;
	cnt1 = (s[1]-'0')*10+(s[2]-'0') ;
	cnt2 = (s[4]-'0')*10+(s[5]-'0') ;
	cnt3 = (s[8]-'0')*10+(s[9]-'0') ;
	cnt4 = (s[11]-'0')*10+(s[12]-'0') ;
	if(cnt1 != cnt3){
		cout <<"0000" << endl ;
	}
	else{
		cout << "1" ;
		if(cnt2==cnt4){
			cout << "1" ;
			int t = abs(s[13]-s[6]);
			int k1 = s[6]-'A'+1 ;
			int k2 = s[13]-'A'+1 ;
			if((k1<=3&&k2<=3)||(k1>=4&&k2>=4)){
				cout << "1" ;
				if(t!=1||((s[6]=='C'&&s[13]=='D')||(s[6]=='D'&&s[13]=='C'))){
					cout << "0" ;
				}
				else{
					cout << "1" ;
				}
			}
			else{
				cout << "00" ;
			}
		}
		else{
			cout <<"000" ;
		}
		
	}
	return 0 ;
} 
