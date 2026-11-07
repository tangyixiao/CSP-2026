#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int c1,s1,c2,s2;
	string a,b;
	cin>>c1>>s1>>a>>c2>>s2>>b;
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(s1==s2){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if((s1==s2)&&!((a=="C"&&b=="D")||(b=="D"&&a=="C"))){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(((a=="B"&&b=="A")||(b=="B"&&a=="A"))||((a=="B"&&b=="C")||(b=="B"&&a=="C"))||((a=="D"&&b=="F")||(b=="D"&&a=="F"))){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
} 
