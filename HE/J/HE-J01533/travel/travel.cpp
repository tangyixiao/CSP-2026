#include<bits/stdc++.h>
using namespace std;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	int k=0,a,a1,b,b1;
	char c,c1;
	cin>>a>>b>>c>>a1>>b1>>c1;
    if(a==a1){
        cout<<1;
	}
	else{
		cout<<"0000";
		return 0;
	}
    if(b==b1){
    	cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	if((c=='D'&&c1=='E')||(c1=='D'&&c=='E')||((c=='A'||c=='B'||c=='C')&&(c1=='A'||c1=='B'||c1=='C'))){
		cout<<"1";
	}
	else{
		cout<<"00";
		return 0;
	}
	if((c=='D'&&c1=='E')||(c1=='D'&&c=='E')||(c=='A'&&c1=='B')||(c1=='A'&&c=='B')||(c=='B'&&c1=='C')||(c=='C'&&c1=='B')){
		cout<<1;
	}
	else{
		cout<<0;
	}
	
    return 0;
} 
