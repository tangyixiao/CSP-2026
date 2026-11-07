#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2&&'s1+1'=='s2'){
		cout<<1111;
	}if(c1==c2&&'s1+1'!='s2'){
		cout<<1110;
	
	}else{
		cout<<0000;
	}
	

	freopen("travel.in","r",stdin);
	freopen("travel.out","r",stdout);
	return 0;
}
