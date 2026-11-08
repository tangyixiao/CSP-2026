#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	int ss1=s1[0]*10+s1[1];
	int ss2=s2[0]*10+s2[1];
	if(ss1!=ss2){
		cout<<"1000";
		return 0;
	}
	ss1=s1[2]-64;
	ss2=s2[2]-64;
	bool pai=((ss1==1||ss1==2||ss1==3)&&(ss2==1||ss2==2||ss2==3))||((ss1==4||ss1==5)&&(ss2==4||ss2==5));
	if(!pai){
		cout<<"1100";
		return 0;
	}
	if(abs(ss1-ss2)==1){
		cout<<"1111";
		return 0;
	}else{
		cout<<"1110";
		return 0;
	}
	return 0;
} 
