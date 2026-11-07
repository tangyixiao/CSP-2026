#include <iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string n,m,n1,m1;
	cin>> n >> m >> n1 >> m1;
	if(n==n1){
		cout << "1";
		if(m[0]==m1[0]&&m[1]==m1[1]){
    		cout << "1";
    		if((m[2]>'C'&&m1[2]>'C')||(m[2]<='C'&&m1[2]<='C')){
	        	cout << "1";
	        	if((m[2]-'A'+1==m1[2]-'A')||(m1[2]-'A'+1==m[2]-'A')){
	    	        cout << "1";
            	}
            	else{
	            	cout << "0";
            	}
	        }  
        	else{
	        	cout << "00";
        	}
    	}
    	else{
		    cout << "000";
    	}
	}
	else{
		cout << "0000";
	}
	return 0;
}