#include<bits/stdc++.h> 
using namespace std;
string c1,c2,s1,s2;
int ss1,ss2,cc1,cc2,n,m,q;
signed main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	ss1=10*(s1[0]-'0')+s1[1]-'0';
	ss2=10*(s2[0]-'0')+s2[1]-'0';
	cc1=10*(c1[0]-'0')+c1[1]-'0';
	cc2=10*(c2[0]-'0')+c2[1]-'0';
	n=s1[2]-'A'+1;
	m=s2[2]-'A'+1;
	if((n-m)<0){
		q=-(n-m);
	}
	else{
		q=n-m;
	}
	
	
	if(cc1==cc2){
		cout<<"1";
	}
	else{
		cout<<"0000";
		return 0;
	}
	
	
	if(ss1==ss2){
		cout<<"1";
	}
	else{
		cout<<"000";
		return 0;
	}
	
	
	if(n<=3 && n>=1&&m<=3&&m>=1){
		cout<<"1";
	}
	else if(n>3 && n<=5 &&m>3 && m<=5){
		cout<<"1";
	}
	else{
		cout<<"00";
		return 0;
	}
	
	
	if(q==1){
		cout<<"1";
	} 
	else{
		cout<<"0";
	}
	return 0;
}
