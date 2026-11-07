#include<bits/stdc++.h>
using namespace std;
char s1[11],s2[11],c1[11],c2[11];
string d1,d2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1[0]+c1[1]==c2[0]+c2[1]){
		cout<<"1";
		if(s1[0]+s1[1]==s2[0]+s2[1]){
			cout<<"1";
			d1=s1[2],d2=s2[2];
			if(d1=="C"&&d2=="A"){
				cout<<"10";
				return 0;
			}
   			else if(d1=="A"&&d2=="C"){
				cout<<"10";
				return 0;
			   }
			else if(d1=="A"&&d2=="B"){
				cout<<"11";
				return 0;
			}
			else if(d1=="B"&&d2=="A"){
				cout<<"11";
				return 0;
			}
			else if(d1=="B"&&d2=="C"){
				cout<<"11";
				return 0;
			}
			else if(d1=="C"&&d2=="B"){
				cout<<"11";
				return 0;
			}
			else if(d1=="D"&&d2=="F"){
				cout<<"11";
				return 0;
			}
			else if(d1=="F"&&d2=="D"){
				cout<<"11";
				return 0;
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