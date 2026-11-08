#include<bits/stdc++.h>
using namespace std;
string a1,a2,b1,b2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a1>>a2>>b1>>b2;
	bool flag=0,f1=0,f2=0;
	if(a1==b1){
		cout<<1;
		flag=1;
	}else{
		cout<<0;
	}
	if(flag==1&&a2[0]==b2[0]&&a2[1]==b2[1]){
		cout<<1; 
		f1=1;
	}else{
		cout<<0;
	}
	if(flag==1&&f1==1&&(a2[2]<='C'&&b2[2]<='C')||(a2[2]>'C'&&b2[2]>'C')){
		cout<<1; 
		f2=1;
	}else{
		cout<<0;
	}
	int x=abs(a2[2]-b2[2]);
	if(flag==1&&f1==1&&f2==1&&(x==1||(a2[2]=='D'&&b2[2]=='F')||(a2[2]=='F'&&b2[2]=='D'))){
		cout<<1; 
	}else{
		cout<<0;
	}
	return 0;
} 
