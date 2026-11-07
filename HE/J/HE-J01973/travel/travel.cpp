#include <bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1,s1,c2,s2;
	cin>>c1>>s1>>c2>>s2;
	bool ioc=(c1==c2);
	bool iol=false,iod=false,ibe=false;
	for(int i=0;i<=2;i++){
		if((i<=1)&&ioc) if(s1[i]==s2[i]) iol=true;
		if((i==2)&&iol){
			bool s1ac=(s1[2]=='A'||s1[2]=='B'||s1[2]=='C'),s2ac=(s2[2]=='A'||s2[2]=='B'||s2[2]=='C');
			bool s1de=(s1[2]=='D'||s1[2]=='E'),s2de=(s2[2]=='D'||s2[2]=='E');
			if(s1ac&&s2ac) iod=true;
			if(s1de&&s2de) iod=true;
		}
		if((i==2)&&iod){
			if(s1[2]-s2[2]==1) ibe=true;
			if(s2[2]-s1[2]==1) ibe=true;
		}
	}
	cout<<ioc<<iol<<iod<<ibe;
	return 0;
}
