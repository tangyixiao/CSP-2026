#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	long long a1 , a2 , b1 , b2 ;
	cin >> a1 >> a2 >> b1 >> b2 ;
	if(a1 != b1){
		
		cout<<"0000";
	}else if (a1 == b1){
		if(a2 - b2 == 1){
            cout << "1111" ;		    	
		}else if(b2 - a2 == 1){
		    cout << "1111" ;
		}else if(a2 - b2 >= 5){
			cout << "1100" ;	
		}else if(b2 - a2 >= 5){
			cout << "1100" ;
	    }else if(a2 - b2 >= 90){
	    	cout << "1000" ;
		}else if(b2 - a2 >= 90){
	    	cout << "1000" ;
		}else if(a2 - b2 <= 5){
			cout << "1110" ;
		}else if(b2 - a2 <= 5){
			cout << "1110" ;
	    }
}
return 0;
}                                                                                                                                           
