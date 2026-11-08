#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout); 
	string c1,s1,c2,s2;cin>>c1>>s1>>c2>>s2;
	if(c1!=c2){
		cout<<"0000";
		return 0; 
	}
	else cout<<1;
	string x,x1;
	x=s1[0]+s1[1];x1=s2[0]+s2[1];
	if(x!=x1){
		cout<<"000";
		return 0;
	}
	else cout<<1;
	char x3=s1[2];char x4=s2[2];
	if((x3<='C' && x4<='C')||(x3>='D'&&x4>='D')){
		cout<<"1";
	}
	else{
		cout<<"00";return 0;
	}
	if(x3+1==x4 || x3-1==x4) cout<<1;
	else cout<<0;
	return 0;
}
