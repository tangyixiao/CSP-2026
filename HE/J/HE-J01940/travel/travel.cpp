#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	bool f=true;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<'1';
	}
	else{
		cout<<'0';
		f=false;
	}
	if(s1[0]+s1[1]==s2[0]+s2[1]&&f){
		cout<<'1';
	}
	else{
		cout<<'0';
		f=false;
	}
	if(s1[2]<=67&&s2[2]<=67&&f||s1[2]>67&&s2[2]>67&&f){
		cout<<'1';
	}
	else{
		cout<<'0';
		f=false;
	}
	bool f1=true;
	if(s2[2]=='C'&&s1[2]=='D'||s2[2]=='D'&&s1[2]=='C'){
		 f1=false;
	}
	if(abs(s2[2]-s1[2])==1&&f1&&f){
		cout<<'1';
	}
	else{
		cout<<'0';
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
}
