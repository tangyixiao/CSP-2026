#include<bits/stdc++.h>
using namespace std;

string cx1,cx2,zw1,zw2;
string sz1,sz2,zm1,zm2; 

int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>cx1>>zw1>>cx2>>zw2;
	sz1=zw1[0]+zw1[1];
	sz2=zw2[0]+zw2[1];
	zm1=zw1[2];
	zm2=zw2[2];
	if(cx1!=cx2){
		cout<<"0000";
	}else if(sz1!=sz2){
		cout<<"1000";
	}else if(!((((zm1>="A" && zm1<="C") && (zm2>="A" && zm2<="C")) || ((zm1=="D" || zm1=="F") && (zm2=="D" && zm2=="F"))))){
		cout<<"1100";
	}else if(!((zm1=="D" && zm2=="F") || (zm1=="F" && zm2=="D") || abs(zm1[0]-zm2[0])==1)){
		cout<<"1110";
	}else{
		cout<<"1111";
	}
	return 0;
}
