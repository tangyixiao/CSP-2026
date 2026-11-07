#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
string r="";
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	string n1,n2,m1,m2;
	n1=s1.substr(0,2),m1=s1.substr(2);
	n2=s2.substr(0,2),m2=s2.substr(2);
	if(c1==c2){
		r+="1";
		if(n1==n2){
			r+="1";
			if((m1>="D"&&m2>="D") || (m1<="C"&&m2<="C")){
				r+="1";
				int x=m1[0]-'0',y=m2[0]-'0';
				if(x-y==1||y-x==1) r+="1";
				else r+="0"; 
			}else r+="00";
		}else r+="000";
	}else r+="0000";
	
	cout<<r;
	return 0;
}