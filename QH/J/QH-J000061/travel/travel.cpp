#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	if(c1==c3){
		cout<<"1";
	}
	else{
		cout<<"0000";
	}
	if(c2.length()-2==c4.length()-2){
		cout<<"1";
	}
	else{
		cout<<"000";
	}
	if((c2.length()-1)-(c4.length()-1)<3||(c4.length()-1)-(c3.length()-1)<3){
		cout<<"1";
	}
	else{
		cout<<"00";
	}
	if((c2.length()-1)-(c4.length()-1)==1||(c4.length()-1)-(c2.length()-1)==1){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}
