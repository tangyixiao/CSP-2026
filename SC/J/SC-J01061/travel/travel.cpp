#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
char b1,b2;
int a1,a2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	a1=int(s1[0]-'0')*10+int(s1[1]-'0');
	b1=s1[2];
	a2=int(s2[0]-'0')*10+int(s2[1]-'0');
	b2=s2[2];
	if(a1==a2) cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	//cout<<int('A')<<' '<<int(b1)<<' '<<int('C')<<' '<<int('D')<<' '<<int(b2)<<' '<<int('F')<<endl;
	if((int('A')<=int(b1)&&int(b1)<=int('C')&&int('A')<=int(b2)&&int(b2)<=int('C'))||(int('D')<=int(b1)&&int(b1)<=int('F')&&int('D')<=int(b2)&&int(b2)<=int('F'))){
		cout<<1;
	}else{
		cout<<"00";
		return 0;
	}
	if(abs(int(b1)-int(b2))==1){
		cout<<1;
		return 0;
	}else{
		cout<<0;
		return 0;
	}
	return 0;
}