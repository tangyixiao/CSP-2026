#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
    int c1,c2;
	double s1,s2,s3,s4;
	cin>>c1>>s1>>s3>>c2>>s2>>s4;
	if(c1==c2){
		cout<<"0000";
	    return 0;
	}
	if(c1!=c2){
		cout<<"1";
	}
	if(s1==s2){
		cout<<"000";
		return 0;
	}
	if(s1!=s2){
		if(s3<='C'&&s4<='C'){
			if(s3+'1'==s4){
				cout<<"111";
			}
			else if(s3-'1'==s4){
				cout<<"111";
			}
			else {
				cout<<"110";
			}	
		}
		else if(s3>'C'&&s4>'C'){
			if(s3+'1'==s4){
				cout<<"111";
			}
			else if(s3-'1'==s4){
				cout<<"111";
			}
			else {
				cout<<"110";
			}
		}
		else if(s3>'C'&&s4<='C'){
			cout<<"100";
		}
		else if(s3<='C'&&s4>'C'){
			cout<<"100";
		}
	}
	return 0;
}