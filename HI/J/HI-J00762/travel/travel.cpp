#include<bits/stdc++.h>
using namespace std;

int main(){
	
	freopen ("travel.in","r",stdin);
    freopen ("travel.out","w",stdout);

	char c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	
	while(c1 != 01 && c1 != 16 && c2 != 01 && c2 != 16){
		
		if(c1 == c2 && s1 == s2 &&  s1 - s2 == 1){//
			cout<<"1111";
			break;
		}else if(c1 == c2 && s1 == s2 &&  s1 - s2 != 1){//
			cout<<"1110";
			break;
		} else if(c1 == c2 && s1 == s2 &&  s1 - s2 == 1){//
			cout<<"1101";
			break;
		} else if(c1 == c2 && s1 == s2 &&  s1 - s2 != 1){//
			cout<<"1100";
			break;
		} else if(c1 == c2 && s1 != s2 &&  s1 - s2 == 1){//
			cout<<"1001";
			break;
		}else if (c1 != c2 && s1 == s2 &&  s1 - s2 == 1 ){//
			cout<<"0101";
			break;
		}else if (c1 != c2 && s1 == s2 && s1 - s2 != 1) {//
			cout<<"0110";
			break;
		}else if (c1 == c2 && s1 != s2 && s1 - s2 != 1){//
			cout<<"1000";
			break;
		}else if (c1 != c2 && s1 == s2 && s1 - s2 != 1){//
			cout<<"0100";
			break;
		}else if (c1 != c2 && s1 != s2 && s1 - s2 != 1){//
	    	cout<<"0010";
			break;
		}else if (c1 != c2 && s1 != s2 && s1 - s2 == 1 ){//
			cout<<"0001";
			break;
		}else if (c1 != c2 && s1 != s2 &&  s1 - s2 != 1) {//
	        cout<<"0000";
			break;
		}
		
	
	}
			return 0;
}
