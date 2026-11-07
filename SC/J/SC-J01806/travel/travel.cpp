#include<bits/stdc++.h>
using namespace std;
string a,b,c,d;
bool q=0,w=0,e=0,r=0;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>a>>b>>c>>d;
	if(a==c){
		q=1;
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	string k;
	string l;
	k+=b[0];
	k+=b[1];
	l+=d[0];
	l+=d[1]; 
	if(q==1&&k==l){
		w=1;
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}
	if(q==1&&w==1&&(b[2]<='C'&&d[2]<='C')||(b[2]>='D'&&d[2]>='D')){
		e=1;
		cout<<"1";
	}
	else{
		cout<<"00";
		return 0;
	}
	if(q==1&&w==1&&e==1&&((b[2]-d[2]==1)||(b[2]-d[2]==-1))){
		r=1;
		cout<<"1";
	}
	else{
		cout<<"0";
		return 0;
	}
	return 0;
 } 