#include<bits/stdc++.h>
using namespace std;
string c1,z1,c2,z2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>z1>>c2>>z2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	else{
		cout<<"1";
		string t1="",t2="";
		for(int i=0;i<2;i++){
			t1+=z1[i];
			t2+=z2[i];
		}
		if(t1==t2){
			cout<<"1";
		}
		else{
			cout<<"000";
			return 0;
		}
		//
		char x=z1[2],y=z2[2];
		if(x>='A'&&x<='C'&&y>='A'&&y<='C'||x>='D'&&x<='F'&&y>='D'&&y<='F'){
			cout<<"1";
		}
		else{
			cout<<"00";
			return 0;
		}
		//
		if(x=='A'&&y=='B'||x=='B'&&y=='A'||x=='B'&&y=='C'||x=='C'&&y=='B'||x=='D'&&y=='F'||x=='F'&&y=='D'){
			cout<<"1";
		}
		else{
			cout<<"0";
		}
	}
	return 0;
} 
