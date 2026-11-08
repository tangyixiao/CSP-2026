#include<bits/stdc++.h>
using namespace std;
string s1,s2;
string c1,c2;
string p1,p2;
bool f1=0,f2=0,f3=0;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1;
	cin>>s1;
	cin>>c2;
	cin>>s2;
	if(c1==c2){
		cout<<"1";
		f1=1;
	}else cout<<"0";
	p1=s1[0]+s1[1];
	p2=s2[0]+s2[1];
	if((p1==p2)&&(f1==1)){
		cout<<"1";
		f2=1;
	}else cout<<"0";
	if(((s1[2]>='A'&&s1[2]<='C'&&s2[2]>='A'&&s2[2]<='C')||(s1[2]>='D'&&s1[2]<='F'&&s2[2]>='D'&&s2[2]<='F'))&&f1==1&&f2==1){
		cout<<"1";
		f3=1;
	}else{
		cout<<"0";
	}
	if(f3==1&&(char(s1[2]+1)==s2[2]||char(s1[2]-1)==s2[2]&&f1==1&&f2==1)){
		cout<<"1";
	}else cout<<"0";
	return 0;
}
