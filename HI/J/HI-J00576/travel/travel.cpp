#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	preopen("travel.in","r","stdin");
	preopen("travel.out","w","stdout");	
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2&&c1!="01"&&c1!="16") cout<<"1";
	else{
	cout<<"0000";
	return 0;
	}
	int l1=(s1[0]-48)+(s1[1]-48);
	int l2=(s2[0]-48)+(s2[1]-48);
	if(l1==l2) cout<<"1";
	else{
		cout<<"000";
		return 0;	
	}
	int x1=s1[2];
	int x2=s2[2];
	if((x1==66&&x2==69)||(x1==69&&x2==66)||(x1==66&&x2==68)||(x1==68&&x2==66)||(x1==65&&x2==68)||(x1==68&&x2==65)||(x1==65&&x2==69)||(x1==69&&x2==65)||(x1==67&&x2==69)||(x1==69&&x2==67)){
		cout<<"00";
		return 0;
	}
	else if((x1!=67&&x2!=68)||(x1!=68&&x2!=67)&&x1-x2<=2) cout<<"1";
	else{
		cout<<"00";
		return 0;
	}
	if(x1-x2<=1) cout<<"1";
	else{
		cout<<"0";
		return 0;
	}	
	return 0;
}



