#include <bits/stdc++.h>
using namespace std;
int main(){
	
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	string c1,c2,c3,c4;
	cin>>c1>>c2>>c3>>c4;
	if(c1!=c3){
		cout<<"0000";
		return 0;
	}
	cout<<1;
	string p1="",p2="";
	p1+=c2[0],p2+=c4[0];
	p1+=c2[1],p2+=c4[1];
	if(p1!=p2){
		cout<<"000";
		return 0;
	}
	cout<<1;
	if((c2[2]>='A' && c2[2]<='C')&&(c4[2]>='D' && c4[2]<='F')||(c4[2]>='A' && c4[2]<='C')&&(c2[2]>='D' && c2[2]<='F')){
		cout<<"00";
		return 0;
	}
	cout<<0;
	if(abs(c2[2]-c4[2])==1) cout<<1;
	else cout<<0;
	//02 01A 03 01A
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
