#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int id1,id2,num1,num2;
char ch1,ch2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	id1=(c1[0]-'0')*10+(c1[1]-'0');
	id2=(c2[0]-'0')*10+(c2[1]-'0');
	num1=(s1[0]-'0')*10+(s1[1]-'0');
	num2=(s2[0]-'0')*10+(s2[1]-'0');
	ch1=s1[2];
	ch2=s2[2];
	if(id1!=id2){
		cout<<"0000";
	}
	else if(num1!=num2){
		cout<<"1000";
	}
	else if(ch1<='C'&&ch2>'C'||ch1>'C'&&ch2<='C'){
		cout<<"1100";
	}
	else if(ch1=='A'&&ch2=='C'||ch2=='A'&&ch1=='C'){
		cout<<"1110";
	}
	else{
		cout<<"1111";
	}
	return 0;
}
