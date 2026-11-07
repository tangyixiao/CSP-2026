#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1;
	string s1;
	string c2;
	string s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2)
		cout<<"1";
	else
		cout<<"0";
    for(string i=0;i<s1;i+=1) {
    	for(string j=0;j<s2;j+=1){
    		if(i==j){
    			cout<<"1";
    	    }
            else{
		        cout<<"0";
		        break;
	     	}
	        break;
		}
		break;
	}
	cout<<"11";
	return 0;
}
