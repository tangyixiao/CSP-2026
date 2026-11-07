#include<iostream>
#include<cmath>
using namespace std;

string c1,s1,c2,s2;

bool check1(){
	return c1==c2;
}

bool check2(){
	string mj1="",mj2="";
	mj1+=s1[0];
	mj1+=s1[1];
	mj2+=s2[0];
	mj2+=s2[1];
	return mj1==mj2;
}

bool check3(){
	if(!check2()){
		return false;
	}
	char mj1,mj2;
	mj1=s1[2];
	mj2=s2[2];
	return (mj1<='C'&&mj2<='C')||(mj1>='D'&&mj2>='D');
}

bool check4(){
	if(!check3()){
		return false;
	}
	char zmj1,zmj2;
	int fmj1,fmj2;
	zmj1=s1[2];
	zmj2=s2[2];
	fmj1=(int)(zmj1);
	fmj2=(int)(zmj2);
	return (abs(fmj1-fmj2)==1);
}

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(check1()){
		cout<<1;
		if(check2()){
			cout<<1;
		}else{
			cout<<0;
		}
		if(check3()){
			cout<<1;
		}else{
			cout<<0;
		}
		if(check4()){
			cout<<1;
		}else{
			cout<<0;
		}
	}else{
		cout<<"0000";
	}
	return 0;
}