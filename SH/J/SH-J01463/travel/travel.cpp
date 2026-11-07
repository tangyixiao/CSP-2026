#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string ans; 
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int car=0,car1=0,ca,ca1;
	ca=ca1=0;
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]>='0'&&c1[0]<='9')ca=ca*10+(c1[0]-'0');
	if(c1[1]>='0'&&c1[1]<='9')ca=ca*10+(c1[1]-'0');
	if(c2[0]>='0'&&c2[0]<='9')ca1=ca1*10+(c2[0]-'0');
	if(c2[1]>='0'&&c2[1]<='9')ca1=ca1*10+(c2[1]-'0');
	int i1,i2;
	i1=i2=0;
	if(s1[0]>='0'&&s1[0]<='9')i1=i1*10+(s1[0]-'0');
	if(s1[1]>='0'&&s1[1]<='9')i1=i1*10+(s1[1]-'0');
	if(s2[0]>='0'&&s2[0]<='9')i2=i2*10+(s2[0]-'0');
	if(s2[1]>='0'&&s2[1]<='9')i2=i2*10+(s2[1]-'0');
	if(s1==s2){
		if(c1[0]>='0'&&c1[0]<='9')car=car*10+(c1[0]-'0');
		if(c1[1]>='0'&&c1[1]<='9')car=car*10+(c1[1]-'0');
		if(c2[0]>='0'&&c2[0]<='9')car1=car1*10+(c2[0]-'0');
		if(c2[1]>='0'&&c2[1]<='9')car1=car1*10+(c2[1]-'0');
		if(car==car1)ans+='1';
		else ans+='0';
		cout<<ans<<"000";
	}else{
		if(c1[0]>='0'&&c1[0]<='9')car=car*10+(c1[0]-'0');
		if(c1[1]>='0'&&c1[1]<='9')car=car*10+(c1[1]-'0');
		if(c2[0]>='0'&&c2[0]<='9')car1=car1*10+(c2[0]-'0');
		if(c2[1]>='0'&&c2[1]<='9')car1=car1*10+(c2[1]-'0');
		if(car==car1)ans+='1';//1
		else ans+='0';//1
		int id1,id2;
		id1=id2=0;
		if(s1[0]>='0'&&s1[0]<='9')id1=id1*10+(s1[0]-'0');
		if(s1[1]>='0'&&s1[1]<='9')id1=id1*10+(s1[1]-'0');
		if(s2[0]>='0'&&s2[0]<='9')id2=id2*10+(s2[0]-'0');
		if(s2[1]>='0'&&s2[1]<='9')id2=id2*10+(s2[1]-'0');
	//	cout<<"id1="<<id1<<" id2="<<id2<<'\n';
		if(id1==id2)ans+='1';//2
		else ans+='0';//2
		char num1=s1[2],num2=s2[2];
		if(num1>='A'&&num1<='C'&&num2>='A'&&num2<='C'&&id1==id2)ans+='1';//3
		else ans+='0';//3
		if((num1-1==num2||num1+1==num2)&&id1==id2){
			if(num1=='C'){
				if(num2=='D')ans+='0';
			}else if(num2=='C'){
				if(num1=='D')ans+='0';
			}else ans+='1';
		}
		else ans+='0';//4
		cout<<ans;
	}

	fclose(stdin);
	fclose(stdout);
	return 0;
} 
