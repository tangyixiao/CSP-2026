#include <bits/stdc++.h>
using namespace std;
string a1,a2;
string b1,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	if(a1 == b1){
		cout<<1;
	}else{
		cout<<"0000";
		return 0;
	}
	
	string row1="";
	row1+=a2[0];
	row1+=a2[1];
	string row2="";
	row2+=b2[0];
	row2+=b2[1];
	if(row1 == row2){
		cout<<1;
	}else{
		cout<<"000";
		return 0;
	}
	
	int r1=0,r2=0;
	if(a2[2] <= 'C'){
		r1=1;
	}
	if(b2[2] <= 'C'){
		r2=1;
	}
	if(r1 == r2){
		cout<<"1";
	}else{
		cout<<"00";
		return 0;
	}
	
	if(abs(a2[2]-b2[2]) == 1){
		cout<<1;
		return 0;
	}
	cout<<0;
	return 0;
}
