#include <bits/stdc++.h>
using namespace std;
string c,s,c1,s1,a,a1;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin >> c >> s >> c1 >> s1;
	if(c==c1){
		cout << 1;
		a=s[0]+s[1];
	    a1=s1[0]+s1[1];
	    if(a==a1){
		    cout<< 1;
		    if((s[2]=='A' && (s1[2]=='B' || s1[2]=='C')) || (s[2]=='B' && (s1[2]=='A' || s1[2]=='C')) || (s[2]=='C' && (s1[2]=='B' || s1[2]=='A')) || (s[2]=='D' && s1[2]=='F') || (s[2]=='F' && s1[2]=='D')){
		    	cout << 1;
		        if(abs(s[2]-s1[2])==1 && (s[2]!='C' && s1[2]!='D') && (s[2]!='D' && s1[2]!='C')){
		    	    cout << 1;
			    }
			    else{
			    	cout <<"0";
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
		cout <<"0000";
	}
	return 0;
}
