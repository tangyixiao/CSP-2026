#include<bits/stdc++.h>
using namespace std;
int main(){
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,c2,s1,s2;
	cin>>c1>>s1>>c2>>s2;
	int num=(s1[0]-'0')*10+(s1[1]-'0');
	int num2=(s2[0]-'0')*10+(s2[1]-'0');
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(c1==c2 && num==num2){
		cout<<"1";
	}else{
		cout<<"0";
	}
	if(c1==c2 && num==num2){
		if((((int)(s1[2])>=65 && (int)(s1[2])<=67) && ((int)(s2[2])>=65 && (int)(s2[2])<=67)) || (((int)(s1[2])>=68 && (int)(s1[2])<=69) && ((int)(s2[2])>=68 && (int)(s2[2])<=69))){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}else{
		cout<<"0";
	}
	if(c1==c2 && num==num2){
		if((s1[2]=='F' && s2[2]=='D') || (s1[2]=='D' && s2[2]=='F')){
			cout<<"1";
		}else if((s1[2]=='C' && s2[2]=='B') || (s1[2]=='B' && s2[2]=='A') || (s1[2]=='B' && s2[2]=='C') || (s1[2]=='A' && s2[2]=='B')){
			cout<<"1";
		}else{
			cout<<"0";
		}
	}else{
		cout<<"0";
	}
	return 0;
}