#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

string c1,s1,c2,s2,a1,a2,b1,b2,b11,b22,b111,b222;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	b1=s1[0];
	b2=s2[0];
	b11=s1[1];
	b22=s2[1];
	a1=s1[2];
	a2=s2[2];
	b111=b1+b11;
	b222=b2+b22;
	if(c1==c2){
		cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
	if(b111==b222){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	if((a1<="C"&&a2<="C")||(a1>="D"&&a2>="D")){
		cout<<1;
	}
	else{
		cout<<"00";
		return 0;
	}
	if(a1[0]-a2[0]==1||a2[0]-a1[0]==1){
		cout<<1;
	}
	else{
		cout<<"0";
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
