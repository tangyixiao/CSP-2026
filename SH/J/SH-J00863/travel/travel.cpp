#include<bits/stdc++.h>
using namespace std;
string s[10],s1;
int n,a[10];
bool flag;
int train(string a,string b){
	for(int j=0;j<a.size();j++){
		if(a[j]!=b[j]) return 0;
	}
	return 1;
}
int seat1(string a,string b){
	if(a[1]==b[1]) return 1;
	else return 0;	
}
int seat2(string a,string b){
	if(a[2]>='A'&&a[2]<='C'){
		if(b[2]>='A'&&b[2]<='C') return 1;
		else return 0;
	}
	if(a[2]>='D'&&a[2]<='F'){
		if(b[2]>='D'&&b[2]<='F') return 1;
		else return 0;
	}
}
int seat3(string a,string b){
	if(abs(int(a[2])-int(b[2]))==1) return 1;
	else return 0;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	for(int i=1;i<=4;i++){
		cin>>s[i];
	}
		if(train(s[1],s[3])){
			s1+='1';	
		if(seat1(s[2],s[4])){
			s1+='1';
			if(seat2(s[2],s[4])){
				s1+='1';
				if(seat3(s[2],s[4])){
				s1+='1';	
			}
			else s1+='0';
		}
		else s1+="00";
	}
	else s1+="000";
}
		else s1+="0000";
		cout<<s1;
		
}
