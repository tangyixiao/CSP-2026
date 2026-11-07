#include<iostream>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool f1=0,f2=0,f3=0,f4=0;
	string c2,s2,c1,s1;
	cin>>c1>>s1>>c2>>s2;
	f1=s1.substr(2,1)=="A"||s1.substr(2,1)=="B"||s1.substr(2,1)=="C";
	f2=s2.substr(2,1)=="A"||s2.substr(2,1)=="B"||s2.substr(2,1)=="C";
	f3=s1.substr(2,1)=="D"||s1.substr(2,1)=="F";
	f4=s2.substr(2,1)=="D"||s2.substr(2,1)=="F";
	if(c1==c2){
	cout<<1;
	if(s1.substr(0,2)==s2.substr(0,2)){
		cout<<1;
		if((f1&&f2)||(f3&&f4)){
			cout<<1;
			if(s1.substr(2,1)=="C"&&s2.substr(2,1)=="A")cout<<1;
			else if(s1.substr(2,1)=="B"||s2.substr(2,1)=="B"||s1.substr(2,1)=="D")cout<<1;
			else cout<<0;
		}
		else cout<<"00";
	}
	else cout<<"000";
}
	else cout<<"0000";
	return 0;
}
