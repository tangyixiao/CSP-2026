#include<bits/stdc++.h>
using namespace std;
bool n1=false,n2=false,n3=false,n4=false;
void che(){
	if (n1==true){
		cout<<"1";
	}	else {
		cout<<"0";
	}
	if (n2==true){
		cout<<"1";
	}	else {
		cout<<"0";
	}
	if (n3==true){
		cout<<"1";
	}	else {
		cout<<"0";
	}
	if (n4==true){
		cout<<"1";
	}	else {
		cout<<"0";
	}
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,c2;
	string s1,s2;
	cin>>c1>>s1>>c2>>s2;
	if (c1==c2){
		n1=true;
	}
	if (n1==true){
		if (s1[0]==s2[0] && s1[1]==s2[1]){
			n2=true;
		}
	}
	if (n1==true && n2==true){
		if (s1[2]=='D' && s2[2]=='F'){
			n3=true;
			n4=true;
		}	else if (s1[2]=='F' && s2[2]=='D'){
			n3=true;
			n4=true;
		}
		if (s1[2]=='A' && s2[2]=='B'){
			n3=true;
			n4=true;
		}	else if (s1[2]=='A' && s2[2]=='C'){
			n3=true;
		}	else if (s1[2]=='B' && s2[2]=='A'){
			n3=true;
			n4=true;
		}	else if (s1[2]=='B' && s2[2]=='C'){
			n3=true;
			n4=true;
		}	else if (s1[2]=='C' && s2[2]=='A'){
			n3=true;
		}	else if (s1[2]=='C' && s2[2]=='B'){
			n3=true;
			n4=true;
		}
	}
	che();
	return 0;
}