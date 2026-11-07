#include<bits/stdc++.h>
using namespace std;
string c1,s1,c2,s2;
int main(){
	freopen("travel.in","r",stdin);
	freopen("travel.out","w",stdout);
	cin>>c1>>s1>>c2>>s2;
	if(c1==c2) cout<<1;
	else{
		cout<<"0000";
		return 0;
	}
	if((s1[0]==s2[0])&&(s1[1]==s2[1])){
		cout<<1;
	}
	else{
		cout<<"000";
		return 0;
	}
	int t1=s1[2]-'A',t2=s2[2]-'A';
	if((t1<=2&&t2<=2)||(t1>=3&&t2>=3)){
		cout<<1;
	}
	else{
		cout<<"00";
		return 0;
	}
	if((t1>=3&&t2>=3)||(t1<=2&&t2<=2&&abs(t1-t2)==1)){
		cout<<1;
	}
	else {
		cout<<0;
	}
	return 0;
}
