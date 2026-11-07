#include <iostream>
#include <string>
#include <cmath>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else {
		cout<<"0000";
		return 0;
	}
	string p1="",p2="";
	for(int i=0;i<2;i++){
		p1+=s1[i];
		p2+=s2[i];
	}
	if(p1==p2) cout<<1;
	else {
		cout<<"000";
		return 0;
	}
	char pc1=s1[2],pc2=s2[2];
	if((pc1>=65&&pc1<=67&&pc2>=65&&pc2<=67)||(pc1>=68&&pc2<=69&&pc1<=69&&pc2>=68)){
		cout<<1;
	}
	else {
		cout<<"00";
		return 0;
	}
	if(abs(pc1-pc2)==1&&((pc1!='C'&&pc1!='D')||(pc1!='D'&&pc2!='C'))){
		cout<<1;
	}
	else cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
