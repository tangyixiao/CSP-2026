#include<iostream>
#include<cmath>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	bool flag=0;
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		flag=1;
		cout<<1;
	} 
	else cout<<0;
	if(s1[0]==s2[0] && s1[1]==s2[1] && flag) {
		flag=1;
		cout<<1;
	}
	else {
		cout<<0;
		flag=0;
	}
	if(((s1[2]<='C' && s2[2]<='C') || (s1[2]>='D'&&s2[2]>='D')) && flag) {
		cout<<1;
		flag=1;
	}
	else{
		cout<<0;
		flag=0;
	}
	if(abs(s1[2]-s2[2])==1 && flag) cout<<1;
	else cout<<0;
	return 0;
} 
