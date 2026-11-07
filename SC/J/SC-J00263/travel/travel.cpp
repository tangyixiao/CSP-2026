#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	char a1[10]={},a2[10]={};
	char b1[10]={},b2[10]={};
	cin>>a1>>a2>>b1>>b2;
	
	int num1=0,num2=0;
	int la=strlen(a1);
	int lb=strlen(b1);
	for(int i=0;i<la;i++)num1=num1*10+a1[i]-'0';
	for(int i=0;i<lb;i++)num2=num2*10+b1[i]-'0';
	if(num1==num2)cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	
	num1=0;
	num2=0;
	int i1=0,i2=0;
	while(a2[i1]>='0'&&a2[i1]<='9'){
		num1=num1*10+a2[i1]-'0';
		i1++;
	}
	while(b2[i2]>='0'&&b2[i2]<='9'){
		num2=num2*10+b2[i2]-'0';
		i2++;
	}
	if(num1==num2)cout<<1;
	else{
		cout<<"000";
		return 0;
	}
	
	num1=a2[i1]-'A';
	num2=b2[i2]-'A';
	if((num1<3&&num2<3)||(num1>=3&&num2>=3))cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if(num1==num2+1||num2==num1+1)cout<<1;
	else cout<<0;
	return 0;
}