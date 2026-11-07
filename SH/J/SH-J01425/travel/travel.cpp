#include <bits/stdc++.h>
#include <cstring>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1!=c2) cout<<"0000";
	else{
		cout<<"1";
		string p1=s1.substr(0,2),p2=s2.substr(0,2);
		if(p1!=p2) cout<<"000";
		else{
			cout<<"1";
			string z1=s1.substr(2,1),z2=s2.substr(2,1);
			if((z1=="D"&&z2=="F")||(z1=="F"&&z2=="D")) cout<<"11";
			else if((z1=="A"&&z2=="B")||(z1=="B"&&z2=="A")||(z1=="B"&&z2=="C")||(z1=="C"&&z2=="B")) cout<<"11";
			else if((z1=="A"&&z2=="C")||(z1=="C"&&z2=="A")) cout<<"10";
			else cout<<"00";
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
