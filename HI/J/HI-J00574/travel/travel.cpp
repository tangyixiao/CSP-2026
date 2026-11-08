#include <bits/stdc++.h>
using namespace std;
long long c1,c2,p1,p2;
string s1,s2,d1,d2;
bool lin(string d1,string d2){
	if(d1=="F"&&d2=="D"){
		return true;
	}
	if(d1=="D"&&d2=="F"){
		return true;
	}
	if(d1=="C"&&d2=="B"){
		return true;
	}
	if(d1=="B"&&d2=="C"){
		return true;
	}
	if(d1=="A"&&d2=="B"){
		return true;
	}
	if(d1=="B"&&d2=="A"){
		return true;
	}
	return false;
}
bool ce(string d1,string d2){
	if(d1=="F"){
		if(d2=="D"){
			return true;
		}
		else{
			return false;
		}
	}
	if(d2=="F"){
		if(d1=="D"){
			return true;
		}
		else{
			return false;
		}
	}
	if(d1!="F"&&d1!="D"&&d2!="F"&&d2!="D"){
		return true;
	}
	return false;
}
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	for(int i=0;i<s1.size();i++){
		if(isdigit(s1[i])){
			p1=p1*10+(s1[i]-'0');
		}
		else{
			d1=s1[i];
		}
	}
	for(int i=0;i<s2.size();i++){
		if(isdigit(s2[i])){
			p2=p2*10+(s2[i]-'0');
		}
		else{
			d2=s2[i];
		}
	}
	if(c1!=c2){
		cout<<"0000";
		return 0;
	}
	else{
		cout<<1;
		if(p1==p2){
			cout<<1;
			if(ce(d1,d2)==true){
				cout<<1;
				if(lin(d1,d2)==true){
					cout<<1;
					return 0;
				}
				if(lin(d1,d2)==false){
					cout<<0;
					return 0;
				}
			}
			if(ce(d1,d2)==false){
				cout<<"00";
				return 0;
			}
		}
		else{
			cout<<"000";
			return 0;
		}
	}
	return 0;
}
