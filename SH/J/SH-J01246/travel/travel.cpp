#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	int cx1,cx2;
	string ze1,ze2;
	cin>>cx1>>ze1>>cx2>>ze2;
	
	if(cx1==cx2) cout<<1;
	else {
		cout<<"0000";
		return 0;
	}
	if(ze1[0]==ze2[0]&&ze1[1]==ze2[1]) cout<<1;
	else {
		cout<<"000";
		return 0;
	}
	if((ze1[2]<='C'&&ze2[2]<='C')||(ze1[2]>='D'&&ze2[2]>='D')) cout<<1;
	else{
		cout<<"00";
		return 0;
	}
	if((ze1[2]=='C'&&ze2[2]=='D')||(ze1[2]=='D'&&ze2[2]=='C')||abs(ze1[2]-ze2[2])!=1) cout<<0;
	else cout<<1;
	
	return 0;
}
