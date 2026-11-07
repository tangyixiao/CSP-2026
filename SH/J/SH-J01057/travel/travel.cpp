#include<bits/stdc++.h>
using namespace std;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	string c1;	
	string s1;
	string c2;
	string s2;
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2){
		 cout<<1;
		 int r=(s1[0]-'0')*10+s1[1]-'0',x=(s2[0]-'0')*10+s2[1]-'0';
		 if(r==x){
		 	cout<<1;
		 	int r1=s1[2],x1=s2[2] ;
		 	if((s1[2]<'D'&&s2[2]<'D')||(s1[2]>'C'&&s2[2]>'C')){
		 		cout<<1;
		 		if(abs(r1-x1)==1) cout<<'1';
		 		else cout<<0;
			 }
			 else cout<<"00";
		 }
		 else cout<<"000";
	}
	else cout<<"0000";
	
	return 0;
	
}
