#include<bits/stdc++.h>
using namespace std;

string c1,s1,c2,s2;

int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	
	cin>>c1>>s1>>c2>>s2;
	string p1=s1.substr(0,2);
	string p2=s2.substr(0,2);
	
	int l1=s1[2];
	int l2=s2[2];
	
	if(c1==c2) cout<<1;
	else cout<<0;
	
	if(c1==c2&&p1==p2) cout<<1;
	else cout<<0;
	
	if(c1==c2&&p1==p2&&((l1<='C'&&l2<='C')||(l1>='D'&&l2>='D'))){
		cout<<1;
	}
	else cout<<0;
	
	if(c1==c2&&p1==p2&&((l1<='C'&&l2<='C')||(l1>='D'&&l2>='D'))){
		
		if(l1<='C'&&l2<='C'){
			if(abs(l1-l2)==1) cout<<1;
			else cout<<0;
		}
		else if(l1>='D'&&l2>='D') cout<<1;
	}
	else{
		cout<<0;
	}
	
	return 0;
}