#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>c2>>s1>>s2;
	int tis1=0,tis2=0,tis3=0;
	if(c1==s1){
		cout<<"1";
		tis1++;
	}
	else{
		cout<<"0";
	}
	
	if(c2[0]==s2[0]&&c2[1]==s2[1]&&tis1==1){
		cout<<"1";
		tis2++;
	}
	else{
		cout<<"0";
	}
	
	if(c2[2]!=s2[2] && (c2[2]>='A'&& c2[2]<='C' &&s2[2]>='A'&& s2[2]<='C' || c2[2]>='D'&& c2[2]<='E' &&s2[2]>='D'&& s2[2]<='E')&&tis1==1&&tis2==1){
		cout<<"1";
		tis3++;
	}
	else{
		cout<<"0";
	}
	
	if(tis2==1&&tis3==1&&!(c2[2]=='A'&& s2[2]=='C' || c2[2]=='C'&& s2[2]=='A')){
		cout<<"1";
	}
	else{
		cout<<"0";
	}
	return 0;
}
