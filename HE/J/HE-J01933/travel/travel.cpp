#include <bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	string p1=s1.substr(0,2);
	string p2=s2.substr(0,2);
	char z1=s1[2];
	char z2=s2[2];
	if(c1==c2){
		cout<<"1";
		if(p1==p2){
			cout<<"1";
			if(int(z1)<=67&&int(z2)<=67||int(z1)>=68&&int(z2)>=68){
				cout<<"1";
				if(z1=='A'&&z2=='B'||z1=='B'&&z2=='A'||z1=='B'&&z2=='C'||z1=='C'&&z2=='B'||z1=='D'&&z2=='F'||z1=='F'&&z2=='D'){
					cout<<"1";
					return 0;
				}
				else{
					cout<<"0";
					return 0;
				}
			}
			else{
				cout<<"00";
				return 0;
			}
		}
		else if(p1!=p2){
			cout<<"000";
			return 0;
		}
	}
	else{
		cout<<"0000";
		return 0;
	}
	return 0;
}
