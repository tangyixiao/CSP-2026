#include<bits/stdc++.h>
using namespace std;
string c1, s1, c2, s2;
int main(){
	freopen("travel.in", "r", stdin);
	freopen("travel.out", "w", stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
	}else{
		cout<<"0000";
		return 0;
	}
	string str1, st1, str2, st2;
	for(int i=0; i<s1.size(); i++){
		if(s1[i]>='0'&&s1[i]<='9'){
			str1+=s1[i]; 
		}else{
			st1+=s1[i];
		}
	}
	for(int i=0; i<s2.size(); i++){
		if(s2[i]>='0'&&s2[i]<='9'){
			str2+=s2[i];
		}else{
			st2+=s2[i];
		} 
	}
	if(str1==str2){
		cout<<"1";
	}else{
		cout<<"000";
		return 0;
	}
	if(st1=="A"||st1=="B"||st1=="C"){
		if(st2=="A"||st2=="B"||st2=="C"){
			cout<<"1";
		}
	}else if(st1=="D"||st1=="F" && st2=="D"||st2<="F"){
		cout<<"1";
	}else{
		cout<<"0"; 
	}
	string st3=st1+st2;
	if(st3=="AB"||st3=="BA"){
		cout<<"1";
	}else if(st3=="BC"&&st3=="CB"){
		cout<<"1";
	}else if(st3=="DF"||st3=="FD"){
		cout<<"1";
	}else{
		cout<<"0";
	}
	return 0;
} 
