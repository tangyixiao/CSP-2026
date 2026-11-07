#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		cout<<"1";
		string str=s1.substr(0,2);
		string str1=s2.substr(0,2);
		if(str==str1){
			cout<<"1";
			string st=s1.substr(2,1);
			string st1=s2.substr(2,1);
			if((st<="C"&&st1<="C")||(st>="D"&&st1>="D")){
				cout<<"1";
				if(st=="A"){
					if(st1=="B"){
						cout<<"1";
					}
					else{
						cout<<"0";	
					}
				}
				else if(st=="B"){
					if(st1=="A"||st1=="C"){
						cout<<"1";
					}
					else{
						cout<<"0";
					}
				}
				else if(st=="C"){
					if(st1=="B"){
						cout<<"1";
					}
					else{
						cout<<"0";
					}
				}
				else if(st=="D"){
					if(st1=="F"){
						cout<<"1";
					}
					else{
						cout<<"0";
					}
				}
				else if(st=="F"){
					if(st1=="D"){
						cout<<"1";
					}
					else{
						cout<<"0";
					}
				}
			}
			else{
				cout<<"00";
				return 0;
			}
		}
		else{
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
