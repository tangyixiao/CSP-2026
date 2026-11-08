#include<bits/stdc++.h>
using namespace std;
int a,b;
bool z,z1;
string s1,s2;
int main(){
	//freopen("travel.in","r",stdin);
	//freopen("travel.out","w",stdout);
	cin>>a>>s1>>b>>s2;
	if(a!=b){
		cout<<"0000";
	}
	else {
		cout<<"1";
		if(s1[0]==s2[0]&&s1[1]==s2[1]){
		z=1;
		cout<<"1";
		}
		else {
			z=0;
			cout<<"0";
		}
		if(z&&(s1[2]<='C'&&s2[2]<='C')||(s1[2]>'C'&&s2[2]>'C')){
			cout<<"1";
			z1=1;
		}
		else {
			cout<<"0";
			z1=0;
		}
		if(z&&z1&&abs(int(s1[2])-int(s2[2]))==1){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	
	
	return 0;
}
