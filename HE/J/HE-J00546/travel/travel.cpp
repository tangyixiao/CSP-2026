#include<iostream>
#include<cstring>
#include<cmath>
using namespace std;
string c1,s1,c2,s2;
char pos1,pos2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<1;
	} else {
		cout<<"0000";
		return 0;
	}
	if(s1.substr(0,2)==s2.substr(0,2)){
		cout<<1;
	} else {
		cout<<"000";
		return 0;
	}
	pos1=s1[2];
	pos2=s2[2];
	if(pos1=='A'||pos1=='B'||pos1=='C'){
		if(pos2=='A'||pos2=='B'||pos2=='C'){
			cout<<1;
			if(abs(pos1-pos2)==1){
				cout<<1;
			}
			else {
				cout<<"0";
				return 0;
			}
		} else {
			cout<<"00";
			return 0;
		}
	}
	if(pos1=='D'||pos1=='F'){
		if(pos2=='D'||pos2=='F'){
			cout<<1;
			if(abs(pos1-pos2)==2){
				cout<<1;
			}
			else {
				cout<<"0";
				return 0;
			}
		} else {
			cout<<"00";
			return 0;
		}
	}
	return 0;
}
